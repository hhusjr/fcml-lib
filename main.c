/*
 * main.c
 *
 *  Created on: 04-02-2013
 *      Author: Slawomir Wojtasiak
 */

#include <stdio.h>
#include <stdlib.h>

#include <CUnit/CUnit.h>
#include <CUnit/Basic.h>

#include "fcml_mnemonic_parser_t.h"
#include "modrm_encoder_t.h"
#include "modrm_decoder_t.h"
#include "stream_t.h"
#include "fcml_coll_t.h"
#include "fcml_utils_t.h"
#include "instructions_a_t.h"
#include "instructions_b_t.h"
#include "instructions_c_t.h"
#include "instructions_d_t.h"
#include "instructions_e_t.h"
#include "instructions_f_t.h"
#include "instructions_g_t.h"
#include "instructions_h_t.h"
#include "instructions_i_t.h"
#include "instructions_j_t.h"
#include "instructions_l_t.h"
#include "instructions_m_t.h"
#include "instructions_n_t.h"
#include "instructions_o_t.h"
#include "instructions_p_t.h"
#include "instructions_r_t.h"
#include "instructions_s_t.h"
#include "instructions_t_t.h"
#include "instructions_u_t.h"
#include "instructions_v_t.h"
#include "instructions_w_t.h"
#include "instructions_x_t.h"
#include "fcml_intel_parser_t.h"
#include "fcml_asm_dialect_intel.h"

#include "fcml_assembler.h"
#include "ira.h"

#include "instructions_base_t.h"

CU_SuiteInfo *suites[] = {
	fctl_si_instructions_a,
	fctl_si_instructions_b,
	fctl_si_instructions_c,
	fctl_si_instructions_d,
	fctl_si_instructions_e,
	fctl_si_instructions_f,
	fctl_si_instructions_g,
	fctl_si_instructions_h,
	fctl_si_instructions_i,
	fctl_si_instructions_j,
	fctl_si_instructions_l,
	fctl_si_instructions_m,
	fctl_si_instructions_n,
	fctl_si_instructions_o,
	fctl_si_instructions_p,
	fctl_si_instructions_r,
	fctl_si_instructions_s,
	fctl_si_instructions_t,
	fctl_si_instructions_u,
	fctl_si_instructions_v,
	fctl_si_instructions_w,
	fctl_si_instructions_x,
	fctl_si_modrm_encoder,
    fctl_si_modrm_decoder,
    fctl_si_stream,
    fcml_si_coll,
    fcml_si_utils,
	fcml_si_intel_parser,
	fcml_si_mnemonic_parser,
    NULL
};

#include "fcml_disassembler.h"
#include "fcml_rend.h"

void new_disassembler_test(void) {

	fcml_st_dialect_context dialect = fcml_fn_get_intel_dialect_context();

	fcml_st_disassembler *disassembler;
	fcml_ceh_error error = fcml_fn_disassembler_init( &dialect, &disassembler );
	if( error ) {
		// Error.
		return;
	}

	// db 080h, 0D0h, 042h
	// adc    al,42h
	// adc    $0x42,%al

	//0x80, 0x54, 0x01, 0x02, 0x03
	//adc byte ptr [ecx+eax+00000002h],03h
    //adcb   $0x3,0x2(%rcx,%rax,1)

	// adc al,42h

	//fcml_uint8_t code[] = { 0x80, 0x54, 0x01, 0x02, 0x03 };
	// ff5b01 call far fword ptr [ebx+1]

	// FCML_I32( "call far 6655h:44332211h", 0x9A, 0x11, 0x22, 0x33, 0x44, 0x55, 0x66 );
	// 9a112233445566 call far 2211h:66554433h

	//FCML_I3264_M( "adc al,42h", 2, FCML_MI( 0x14, 0x42 ), FCML_MI( 0x80, 0xD0, 0x42 ) );
	// 1442 adc al,42h

	// FCML_I32( "cmps byte ptr [si],byte ptr [di]", 0x67, 0xA6 );
	// 67a6 cmps byte ptr [si],byte ptr [di]

	fcml_uint8_t code[] = { 0x67, 0xA6 };

	//imm_extend_to_osa
	fcml_st_disassembler_context context;
	context.disassembler = disassembler;
	context.addr_form = FCML_AF_32_BIT;
	context.address_size_attribute = FCML_DS_32;
	context.operand_size_attribute = FCML_DS_32;
	context.code_address = code;
	context.code_size = sizeof( code );
	context.ip.eip = FCML_AF_32_BIT;

	fcml_st_disassembler_result *result;
	error = fcml_fn_disassemble( &context, &result );
	if( !error ) {

		fcml_char buffer[256];

		fcml_fn_env_memory_clean( buffer, sizeof( buffer ) );

		fcml_st_memory_stream stream;
		stream.base_address = buffer;
		stream.offset = 0;
		stream.size = sizeof( buffer );

		if( !fcml_fn_rend_render_instruction( &dialect, &stream, result, FCML_REND_FLAG_RENDER_CODE | FCML_REND_FLAG_HEX_IMM ) ) {
			printf( "%s\n", buffer );
		}

	}

	if( disassembler ) {
		fcml_fn_disassembler_free( disassembler );
	}

}

int main(int argc, char **argv) {

	fcml_ceh_error error = fcml_fn_assembler_init( fcml_fn_get_intel_dialect_context(), &assembler );
	if( error ) {
		printf("Can not initialize assembler.\n");
		return 1;
	}
	ira_init();

	new_disassembler_test();
	return 0;

   // FCML_I32_D( "vgatherdpd xmm0,dword ptr [eax+xmm5],xmm0", 0xC4, 0xE2, 0xF9, 0x92, 0x04, 0x28 );

	///return 0;


	// , FCML_MI( 0xd0, 0x10 )
	//return 0;
	//  FCML_I64_P( "cmps byte ptr [rsi],byte ptr [rdi]", 0x48, 0xA6 );

  //  return 0;

    if (CU_initialize_registry()) {
        printf("Initialization of Test Registry failed.");
    } else {
        int i;
        for( i = 0; suites[i]; i++ ) {
            if (CU_register_suites(suites[i]) != CUE_SUCCESS) {
                fprintf(stderr, "suite registration failed - %s\n", CU_get_error_msg());
                ira_deinit();
                fcml_fn_assembler_free( assembler );
                exit(1);
            }
        }
        CU_basic_run_tests();
        CU_cleanup_registry();
    }
    fcml_fn_assembler_free( assembler );
    ira_deinit();
    exit(0);
}
