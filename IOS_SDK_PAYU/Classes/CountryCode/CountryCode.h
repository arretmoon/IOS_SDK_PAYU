//
//  CountryCode.h
//  Pods
//
//  Created by Max on 17.12.16.
//
//

typedef enum{
    CountryCodeNone,
    CountryCodeAD,
    CountryCodeAE,
    CountryCodeAF,
    CountryCodeAG,
    CountryCodeAI,
    CountryCodeAL,
    CountryCodeAM,
    CountryCodeAO,
    CountryCodeAQ,
    CountryCodeAR,
    CountryCodeAS,
    CountryCodeAT,
    CountryCodeAU,
    CountryCodeAW,
    CountryCodeAX,
    CountryCodeAZ,
    CountryCodeBA,
    CountryCodeBB,
    CountryCodeBD,
    CountryCodeBE,
    CountryCodeBF,
    CountryCodeBG,
    CountryCodeBH,
    CountryCodeBI,
    CountryCodeBJ,
    CountryCodeBL,
    CountryCodeBM,
    CountryCodeBN,
    CountryCodeBO,
    CountryCodeBQ,
    CountryCodeBR,
    CountryCodeBS,
    CountryCodeBT,
    CountryCodeBV,
    CountryCodeBW,
    CountryCodeBY,
    CountryCodeBZ,
    CountryCodeCA,
    CountryCodeCC,
    CountryCodeCD,
    CountryCodeCF,
    CountryCodeCG,
    CountryCodeCH,
    CountryCodeCI,
    CountryCodeCK,
    CountryCodeCL,
    CountryCodeCM,
    CountryCodeCN,
    CountryCodeCO,
    CountryCodeCR,
    CountryCodeCU,
    CountryCodeCV,
    CountryCodeCW,
    CountryCodeCX,
    CountryCodeCY,
    CountryCodeCZ,
    CountryCodeDE,
    CountryCodeDJ,
    CountryCodeDK,
    CountryCodeDM,
    CountryCodeDO,
    CountryCodeDZ,
    CountryCodeEC,
    CountryCodeEE,
    CountryCodeEG,
    CountryCodeEH,
    CountryCodeER,
    CountryCodeES,
    CountryCodeET,
    CountryCodeFI,
    CountryCodeFJ,
    CountryCodeFK,
    CountryCodeFM,
    CountryCodeFO,
    CountryCodeFR,
    CountryCodeGA,
    CountryCodeGB,
    CountryCodeGD,
    CountryCodeGE,
    CountryCodeGF,
    CountryCodeGG,
    CountryCodeGH,
    CountryCodeGI,
    CountryCodeGL,
    CountryCodeGM,
    CountryCodeGN,
    CountryCodeGP,
    CountryCodeGQ,
    CountryCodeGR,
    CountryCodeGS,
    CountryCodeGT,
    CountryCodeGU,
    CountryCodeGW,
    CountryCodeGY,
    CountryCodeHK,
    CountryCodeHM,
    CountryCodeHN,
    CountryCodeHR,
    CountryCodeHT,
    CountryCodeHU,
    CountryCodeID,
    CountryCodeIE,
    CountryCodeIL,
    CountryCodeIM,
    CountryCodeIN,
    CountryCodeIO,
    CountryCodeIQ,
    CountryCodeIR,
    CountryCodeIS,
    CountryCodeIT,
    CountryCodeJE,
    CountryCodeJM,
    CountryCodeJO,
    CountryCodeJP,
    CountryCodeKE,
    CountryCodeKG,
    CountryCodeKH,
    CountryCodeKI,
    CountryCodeKM,
    CountryCodeKN,
    CountryCodeKP,
    CountryCodeKR,
    CountryCodeKW,
    CountryCodeKY,
    CountryCodeKZ,
    CountryCodeLA,
    CountryCodeLB,
    CountryCodeLC,
    CountryCodeLI,
    CountryCodeLK,
    CountryCodeLR,
    CountryCodeLS,
    CountryCodeLT,
    CountryCodeLU,
    CountryCodeLV,
    CountryCodeLY,
    CountryCodeMA,
    CountryCodeMC,
    CountryCodeMD,
    CountryCodeME,
    CountryCodeMF,
    CountryCodeMG,
    CountryCodeMH,
    CountryCodeMK,
    CountryCodeML,
    CountryCodeMM,
    CountryCodeMN,
    CountryCodeMO,
    CountryCodeMP,
    CountryCodeMQ,
    CountryCodeMR,
    CountryCodeMS,
    CountryCodeMT,
    CountryCodeMU,
    CountryCodeMV,
    CountryCodeMW,
    CountryCodeMX,
    CountryCodeMY,
    CountryCodeMZ,
    CountryCodeNA,
    CountryCodeNC,
    CountryCodeNE,
    CountryCodeNF,
    CountryCodeNG,
    CountryCodeNI,
    CountryCodeNL,
    CountryCodeNP,
    CountryCodeNR,
    CountryCodeNU,
    CountryCodeNZ,
    CountryCodeOM,
    CountryCodePA,
    CountryCodePE,
    CountryCodePF,
    CountryCodePG,
    CountryCodePH,
    CountryCodePK,
    CountryCodePL,
    CountryCodePM,
    CountryCodePN,
    CountryCodePR,
    CountryCodePS,
    CountryCodePT,
    CountryCodePW,
    CountryCodePY,
    CountryCodeQA,
    CountryCodeRE,
    CountryCodeRO,
    CountryCodeRS,
    CountryCodeRU,
    CountryCodeRW,
    CountryCodeSA,
    CountryCodeSB,
    CountryCodeSC,
    CountryCodeSD,
    CountryCodeSE,
    CountryCodeSG,
    CountryCodeSH,
    CountryCodeSI,
    CountryCodeSJ,
    CountryCodeSK,
    CountryCodeSL,
    CountryCodeSM,
    CountryCodeSN,
    CountryCodeSO,
    CountryCodeSR,
    CountryCodeSS,
    CountryCodeST,
    CountryCodeSV,
    CountryCodeSX,
    CountryCodeSY,
    CountryCodeSZ,
    CountryCodeTC,
    CountryCodeTD,
    CountryCodeTF,
    CountryCodeTG,
    CountryCodeTH,
    CountryCodeTJ,
    CountryCodeTK,
    CountryCodeTL,
    CountryCodeTM,
    CountryCodeTN,
    CountryCodeTO,
    CountryCodeTR,
    CountryCodeTT,
    CountryCodeTV,
    CountryCodeTW,
    CountryCodeTZ,
    CountryCodeUA,
    CountryCodeUG,
    CountryCodeUM,
    CountryCodeUS,
    CountryCodeUY,
    CountryCodeUZ,
    CountryCodeVA,
    CountryCodeVC,
    CountryCodeVE,
    CountryCodeVG,
    CountryCodeVI,
    CountryCodeVN,
    CountryCodeVU,
    CountryCodeWF,
    CountryCodeWS,
    CountryCodeYE,
    CountryCodeYT,
    CountryCodeZA,
    CountryCodeZM,
    CountryCodeZW,
}CountryCode;

#define CountryCodeString(CountryCode) [@[@"",@"AD",@"AE",@"AF",@"AG",@"AI",@"AL",@"AM",@"AO",@"AQ",@"AR",@"AS",@"AT",@"AU",@"AW",@"AX",@"AZ",@"BA",@"BB",@"BD",@"BE",@"BF",@"BG",@"BH",@"BI",@"BJ",@"BL",@"BM",@"BN",@"BO",@"BQ",@"BR",@"BS",@"BT",@"BV",@"BW",@"BY",@"BZ",@"CA",@"CC",@"CD",@"CF",@"CG",@"CH",@"CI",@"CK",@"CL",@"CM",@"CN",@"CO",@"CR",@"CU",@"CV",@"CW",@"CX",@"CY",@"CZ",@"DE",@"DJ",@"DK",@"DM",@"DO",@"DZ",@"EC",@"EE",@"EG",@"EH",@"ER",@"ES",@"ET",@"FI",@"FJ",@"FK",@"FM",@"FO",@"FR",@"GA",@"GB",@"GD",@"GE",@"GF",@"GG",@"GH",@"GI",@"GL",@"GM",@"GN",@"GP",@"GQ",@"GR",@"GS",@"GT",@"GU",@"GW",@"GY",@"HK",@"HM",@"HN",@"HR",@"HT",@"HU",@"ID",@"IE",@"IL",@"IM",@"IN",@"IO",@"IQ",@"IR",@"IS",@"IT",@"JE",@"JM",@"JO",@"JP",@"KE",@"KG",@"KH",@"KI",@"KM",@"KN",@"KP",@"KR",@"KW",@"KY",@"KZ",@"LA",@"LB",@"LC",@"LI",@"LK",@"LR",@"LS",@"LT",@"LU",@"LV",@"LY",@"MA",@"MC",@"MD",@"ME",@"MF",@"MG",@"MH",@"MK",@"ML",@"MM",@"MN",@"MO",@"MP",@"MQ",@"MR",@"MS",@"MT",@"MU",@"MV",@"MW",@"MX",@"MY",@"MZ",@"NA",@"NC",@"NE",@"NF",@"NG",@"NI",@"NL",@"NP",@"NR",@"NU",@"NZ",@"OM",@"PA",@"PE",@"PF",@"PG",@"PH",@"PK",@"PL",@"PM",@"PN",@"PR",@"PS",@"PT",@"PW",@"PY",@"QA",@"RE",@"RO",@"RS",@"RU",@"RW",@"SA",@"SB",@"SC",@"SD",@"SE",@"SG",@"SH",@"SI",@"SJ",@"SK",@"SL",@"SM",@"SN",@"SO",@"SR",@"SS",@"ST",@"SV",@"SX",@"SY",@"SZ",@"TC",@"TD",@"TF",@"TG",@"TH",@"TJ",@"TK",@"TL",@"TM",@"TN",@"TO",@"TR",@"TT",@"TV",@"TW",@"TZ",@"UA",@"UG",@"UM",@"US",@"UY",@"UZ",@"VA",@"VC",@"VE",@"VG",@"VI",@"VN",@"VU",@"WF",@"WS",@"YE",@"YT",@"ZA",@"ZM",@"ZW"] objectAtIndex:CountryCode]