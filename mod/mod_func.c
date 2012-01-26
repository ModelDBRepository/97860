#include <stdio.h>
#include "hocdec.h"
/* change name when structures in neuron.exe change*/
/* and also change the mos2nrn1.sh script */
int nocmodl5_5;
extern int nrnmpi_myid;
extern int nrn_nobanner_;
modl_reg(){
	nrn_mswindll_stdio(stdin, stdout, stderr);
    if (!nrn_nobanner_) if (nrnmpi_myid < 1) {
	fprintf(stderr, "Additional mechanisms from files\n");

fprintf(stderr," Ca.mod");
fprintf(stderr," CaDiffuse2.mod");
fprintf(stderr," CaDiffuse3.mod");
fprintf(stderr," CaHandler2.mod");
fprintf(stderr," bk_dop.mod");
fprintf(stderr," cal_dop.mod");
fprintf(stderr," cap_dop.mod");
fprintf(stderr," hcn_siegelbaum.mod");
fprintf(stderr," kcnq_hh.mod");
fprintf(stderr," kir2_dop.mod");
fprintf(stderr," kv1_gp.mod");
fprintf(stderr," kv2_hh.mod");
fprintf(stderr," kv2_simplehh.mod");
fprintf(stderr," kv4hh.mod");
fprintf(stderr," leak_dop.mod");
fprintf(stderr," nahh.mod");
fprintf(stderr," sk_dop.mod");
fprintf(stderr," vramp.mod");
fprintf(stderr, "\n");
    }
_Ca_reg();
_CaDiffuse2_reg();
_CaDiffuse3_reg();
_CaHandler2_reg();
_bk_dop_reg();
_cal_dop_reg();
_cap_dop_reg();
_hcn_siegelbaum_reg();
_kcnq_hh_reg();
_kir2_dop_reg();
_kv1_gp_reg();
_kv2_hh_reg();
_kv2_simplehh_reg();
_kv4hh_reg();
_leak_dop_reg();
_nahh_reg();
_sk_dop_reg();
_vramp_reg();
}
