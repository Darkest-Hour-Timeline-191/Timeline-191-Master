##############################
# Country definition for BRA #
##############################
province = { id = 847 anti_air = 1 } # Curitiba
province = { id = 848 anti_air = 2 } # Porto Alegre
province = { id = 883 anti_air = 2 } # Goi�nia
province = {
  id = 885 # Rio de Janeiro
  anti_air = 1
  air_base = { size = 4 current_size = 4 }
  naval_base = { size = 6 current_size = 6 }
}
province = {
  id = 886 # S�o Paulo
  anti_air = 1
  air_base = { size = 4 current_size = 4 }
}
province = {
  id = 4053 # Rio Grande
  air_base = { size = 4 current_size = 4 }
  naval_base = { size = 8 current_size = 8 }
}
province = {
  id = 6491 # Santos
  naval_base = { size = 6 current_size = 6 }
}

#####################
# Country main data #
#####################

country = {
  tag                = BRA
  capital            = 885 # Rio de Janeiro
  manpower           = 200
  # Resource Reserves
  energy         = 1000
  metal          = 1000
  rare_materials = 500
  oil            = 500
  supplies       = 500
  money          = 20

  diplomacy = {
    relation = { tag = ARG value = -10 }
    relation = { tag = BOL value = 10 }
    relation = { tag = CHL value = 10 }
    relation = { tag = COL value = 10 }
    relation = { tag = ECU value = 10 }
    relation = { tag = GER value = 50 }
    relation = { tag = IRE value = 20 }
    relation = { tag = PAR value = 10 }
    relation = { tag = POR value = 75 }
    relation = { tag = PRU value = 10 }
    relation = { tag = SOV value = -50 }
    relation = { tag = URU value = 125 }
    relation = { tag = USA value = 120 }
    relation = { tag = VEN value = 10 }
  }

  nationalprovinces      = { 848 847 835 834 825 823 822 820 872 824 826 878 876 877 879 883 887 886 885 884 882 880 881 2027 2656 2659 2661 2662 2663 2664 2665 2666 2667 2668 2669 2670 2671 2672 2737 2739 2740 2741 2742 2992 2961 2282 2469 2320 3950 3951 3952 3953 3954 3955 3956 3957 3958 3959 3960 3961 3962 3963 3964 3965 3966 3967 3968 3969 3970 3971 3972 3973 3974 3975 3976 3977 3978 3979 3980 3981 3982 3983 3984 3985 3986 3987 3988 3989 3990 3991 3992 3993 3994 3995 3996 3997 3998 3999 4000 4001 4002 4003 4004 4005 4006 4007 4008 4009 4010 4011 4012 4013 4014 4015 4016 4017 4018 4019 4020 4021 4022 4023 4024 4025 4026 4027 4028 4029 4030 4031 4032 4033 4034 4035 4036 4037 4038 4039 4040 4041 4042 4043 4044 4045 4046 4047 4048 4049 4050 4051 4052 4053 4054 4055 4056 4057 4058 4059 4060 4061 4062 4063 4064 4065 4066 4067 4068 4069 4070 4071 4072 4073 4074 4075 4076 4077 4078 4079 4080 4081 4082 4083 4084 4085 4086 4087 4088 4089 4090 4091 4092 4093 4094 4095 4096 4117 5424 5425 5426 5427 5428 5429 5430 5431 5432 5433 5434 5435 5436 5437 5438 5439 5440 5441 5442 5443 5444 5445 5461 5463 5422 6491 7422 7420 7090 }
  ownedprovinces         = { 848 847 835 834 825 823 822 820 872 824 826 878 876 877 879 883 887 886 885 884 882 880 881 2027 2656 2659 2661 2662 2663 2664 2665 2666 2667 2668 2669 2670 2671 2672 2737 2739 2740 2741 2742 2992 2961 2282 2469 2320 3950 3951 3952 3953 3954 3955 3956 3957 3958 3959 3960 3961 3962 3963 3964 3965 3966 3967 3968 3969 3970 3971 3972 3973 3974 3975 3976 3977 3978 3979 3980 3981 3982 3983 3984 3985 3986 3987 3988 3989 3990 3991 3992 3993 3994 3995 3996 3997 3998 3999 4000 4001 4002 4003 4004 4005 4006 4007 4008 4009 4010 4011 4012 4013 4014 4015 4016 4017 4018 4019 4020 4021 4022 4023 4024 4025 4026 4027 4028 4029 4030 4031 4032 4033 4034 4035 4036 4037 4038 4039 4040 4041 4042 4043 4044 4045 4046 4047 4048 4049 4050 4051 4052 4053 4054 4055 4056 4057 4058 4059 4060 4061 4062 4063 4064 4065 4066 4067 4068 4069 4070 4071 4072 4073 4074 4075 4076 4077 4078 4079 4080 4081 4082 4083 4084 4085 4086 4087 4088 4089 4090 4091 4092 4093 4094 4095 4096 4117 5424 5425 5426 5427 5428 5429 5430 5431 5432 5433 5434 5435 5436 5437 5438 5439 5440 5441 5442 5443 5444 5445 5461 5463 6491 7090 7422 }
  controlledprovinces    = { 848 847 835 834 825 823 822 820 872 824 826 878 876 877 879 883 887 886 885 884 882 880 881 2027 2656 2659 2661 2662 2663 2664 2665 2666 2667 2668 2669 2670 2671 2672 2737 2739 2740 2741 2742 2992 2961 2282 2469 2320 3950 3951 3952 3953 3954 3955 3956 3957 3958 3959 3960 3961 3962 3963 3964 3965 3966 3967 3968 3969 3970 3971 3972 3973 3974 3975 3976 3977 3978 3979 3980 3981 3982 3983 3984 3985 3986 3987 3988 3989 3990 3991 3992 3993 3994 3995 3996 3997 3998 3999 4000 4001 4002 4003 4004 4005 4006 4007 4008 4009 4010 4011 4012 4013 4014 4015 4016 4017 4018 4019 4020 4021 4022 4023 4024 4025 4026 4027 4028 4029 4030 4031 4032 4033 4034 4035 4036 4037 4038 4039 4040 4041 4042 4043 4044 4045 4046 4047 4048 4049 4050 4051 4052 4053 4054 4055 4056 4057 4058 4059 4060 4061 4062 4063 4064 4065 4066 4067 4068 4069 4070 4071 4072 4073 4074 4075 4076 4077 4078 4079 4080 4081 4082 4083 4084 4085 4086 4087 4088 4089 4090 4091 4092 4093 4094 4095 4096 4117 5424 5425 5426 5427 5428 5429 5430 5431 5432 5433 5434 5435 5436 5437 5438 5439 5440 5441 5442 5443 5444 5445 5461 5463 6491 7090 7422 }

  techapps               = { 4500 4510 4520 4530 4540 4550 4010 4600 4610 4620 4630 4120 4300 4310 4320 4330 4800 4810 4740 4750 4760 1910 1920 1930 1940 1950 1960 1830 1840 1850 1860 2860 2870 2880 2020 7600 7610 2620 2010 2630 2290 2300 2310 2800 2450 21180 21190 2810 2820 2510 1010 1020 1030 1040 1050 1060 1070 1080 13060 13070 13080 1310 1320 1330 1340 1350 1160 1170 1180 1190 1200 1210 1220 1230 1240 5310 54010 54020 54030 5316 5326 5700 5710 5010 5810 5820 5050 5830 5800 5080 3010 3020 3030 3040 3110 3120 3130 3210 3220 3230 3410 3420 3430 3440 3450 3456 3460 3610 3620 3630 3640 3720 3730 3736 3740 3900 3810 5600 5610 5620 14000 14010 27480 27490 27500 27510 27520 27530 27540 27550 27570 27580 27590 27600 9030 9020 27560 27460 27470 9010 6500 6510 6530 6580 6600 6610 6680 6620 6630 6640 6650 6660 6670 6540 6910 6560 8010 8020 8040 8050 8100 8900 8910 8920 8930 }

  policy = {
    date              = { year = 0 month = january day = 0 }
    democratic        = 8
    political_left    = 3
    freedom           = 7
    free_market       = 8
    professional_army = 3
    defense_lobby     = 6
    interventionism   = 3
  }
  headofstate            = { type = 9 id = 160253 } # S.M.I. Dom Pedro III
  headofgovernment       = { type = 9 id = 160002 } # Getulio Vargas
  foreignminister        = { type = 9 id = 160127 } # Raoul Fernandes
  armamentminister       = { type = 9 id = 160004 } # Caf� Filho
  ministerofsecurity     = { type = 9 id = 160005 } # Marcondes Filho
  ministerofintelligence = { type = 9 id = 160006 } # Filinto Muller
  chiefofstaff           = { type = 9 id = 160007 } # Gaspar Dutra
  chiefofarmy            = { type = 9 id = 160008 } # Joao Neves da Fontoura
  chiefofnavy            = { type = 9 id = 160009 } # Aristides Guilhem
  chiefofair             = { type = 9 id = 160010 } # Salgado Filho

  landunit = {
    id       = { type = 18000 id = 1 }
    name     = "1o Ex�rcito do Brasil"
    location = 885
    division = {
      id             = { type = 18000 id = 2 }
      name           = "I Divis�o de Infantaria"
      type           = infantry
      model          = 7
      extra          = artillery
      brigade_model  = 5
      strength       = 100
    }
    division = {
      id             = { type = 18000 id = 3 }
      name           = "II Divis�o de Infantaria"
      type           = infantry
      model          = 6
      strength       = 100
    }
    division = {
      id             = { type = 18000 id = 4 }
      name           = "CCLXVIII Divis�o do Guarda Civ�l"
      type           = militia
      model          = 3
      extra          = anti_air
      brigade_model  = 1
      strength       = 100
    }
    division = {
      id             = { type = 18000 id = 5 }
      name           = "CCLXIX Divis�o do Guarda Civ�l"
      type           = militia
      model          = 3
      strength       = 100
    }
  }
  landunit = {
    id       = { type = 18000 id = 6 }
    name     = "2o Ex�rcito do Brasil"
    location = 885
    division = {
      id             = { type = 18000 id = 7 }
      name           = "III Divis�o de Infantaria"
      type           = infantry
      model          = 6
      strength       = 100
    }
    division = {
      id             = { type = 18000 id = 8 }
      name           = "XCII Divis�o de Cavalaria"
      type           = cavalry
      model          = 7
      strength       = 100
    }
    division = {
      id             = { type = 18000 id = 30 }
      name           = "XCI Divis�o de Cavalaria"
      type           = cavalry
      model          = 7
      strength       = 100
    }
    division = {
      id             = { type = 18000 id = 28 }
      name           = "IV Divis�o de Infantaria"
      type           = infantry
      model          = 6
      strength       = 100
    }
    division = {
      id             = { type = 18000 id = 27 }
      name           = "V Divis�o de Infantaria"
      type           = infantry
      model          = 6
      strength       = 100
    }
    division = {
      id             = { type = 18000 id = 26 }
      name           = "VI Divis�o de Infantaria"
      type           = infantry
      model          = 6
      strength       = 100
    }
  }

  navalunit = {
    id       = { type = 18000 id = 25 }
    name     = "Navais do Transporte"
    location = 885
    base     = 885
    division = {
      id             = { type = 18000 id = 15 }
      name           = "4. Flotilla de Navios de Transporte"
      type           = transport
    }
    division = {
      id             = { type = 18000 id = 16 }
      name           = "5. Flotilla de Navios de Transporte"
      type           = transport
    }
    division = {
      id             = { type = 18000 id = 17 }
      name           = "6. Flotilla de Navios de Transporte"
      type           = transport
    }
    division = {
      id             = { type = 18000 id = 2306 }
      name           = "1. Flotilla de Contratorpedeiros"
      type           = destroyer
      model          = 1
    }
  }
  navalunit = {
    id       = { type = 18000 id = 18 }
    name     = "Marinha do Brazil"
    location = 885
    base     = 885
    division = {
      id             = { type = 18000 id = 19 }
      name           = "NRB S�o Paulo"
      type           = battleship
      model          = 4
    }
    division = {
      id             = { type = 18000 id = 29 }
      name           = "NRB Minas Gerais"
      type           = battleship
      model          = 4
    }
    division = {
      id             = { type = 18000 id = 21 }
      name           = "NRB Bahia"
      type           = light_cruiser
      model          = 3
    }
    division = {
      id             = { type = 18000 id = 23 }
      name           = "NRB Rio Grande do Sul"
      type           = light_cruiser
      model          = 3
    }
  }
  navalunit = {
    id       = { type = 18000 id = 2304 }
    name     = "I Flotilla do Brasil"
    location = 885
    base     = 885
    division = {
      id             = { type = 18000 id = 2307 }
      name           = "2. Flotilla de Contratorpedeiros"
      type           = destroyer
      model          = 1
    }
    division = {
      id             = { type = 18000 id = 13 }
      name           = "2. Flotilla de Navios de Transporte"
      type           = transport
    }
    division = {
      id             = { type = 18000 id = 12 }
      name           = "1. Flotilla de Navios de Transporte"
      type           = transport
    }
    division = {
      id             = { type = 18000 id = 14 }
      name           = "3. Flotilla de Navios de Transporte"
      type           = transport
    }
  }

  airunit = { 
    id       = { type = 18000 id = 9 }
    name     = "Aereo do Br�sil"
    location = 885
    base     = 885
    division = {
      id             = { type = 18000 id = 10 }
      name           = "1. Grupo de Ca�as"
      type           = interceptor
      model          = 6
      strength       = 50
    }
  }

  division_development = {
    id             = { type = 18000 id = 20 }
    name           = "1. Flotilla de Submarinos"
    type           = submarine
    model          = 3
    cost           = 0.1
    date           = { year = 1936 month = june day = 29 }
  }
}