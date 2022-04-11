##############################
# Country definition for SAF #
##############################
province = {
  id = 1116 # Cape Town
  anti_air = 4
  air_base = { size = 10 current_size = 10 }
  naval_base = { size = 10 current_size = 10 }
}
province = { id = 1117 anti_air = 1 } # Port Elizabeth
province = {
  id = 1118 # Durban
  air_base = { size = 1 current_size = 1 }
  naval_base = { size = 3 current_size = 3 }
}
province = { id = 1119 anti_air = 3 } # Pretoria
province = { id = 1120 anti_air = 3 } # Johannesburg

#####################
# Country main data #
#####################

country = {
  tag                = SAF
  capital            = 1120 # Johannesburg
  manpower           = 200
  # Resource Reserves
  energy         = 1000
  metal          = 1000
  rare_materials = 500
  oil            = 500
  supplies       = 500
  money          = 10

  diplomacy = {
    relation = { tag = AST value = 200 }
    relation = { tag = BEL value = 35 }
    relation = { tag = BHU value = 200 }
    relation = { tag = CAN value = 200 }
    relation = { tag = ENG value = 200 }
    relation = { tag = FIN value = 50 }
    relation = { tag = FRA value = 150 }
    relation = { tag = GER value = 1 }
    relation = { tag = IRE value = 80 }
    relation = { tag = IRQ value = 100 }
    relation = { tag = ITA value = 1 }
    relation = { tag = NEP value = 200 }
    relation = { tag = NZL value = 200 }
    relation = { tag = OMN value = 150 }
    relation = { tag = POR value = 125 }
    relation = { tag = USA value = 125 }
    relation = { tag = YEM value = 150 }
  }
  SpyInfo                = { country = "ENG" NumberOfSpies = 3 }
  SpyInfo                = { country = "USA" NumberOfSpies = 2 }
  SpyInfo                = { country = "HOL" NumberOfSpies = 1 }

  nationalprovinces      = { 1115 1116 1114 1117 1118 1120 1113 1119 1109 1108 1107 1106 1110 2643 2644 2772 2773 2774 2775 2776 2777 2778 2779 2797 2798 4993 4994 4995 4996 4997 4998 4999 5000 5001 5002 5003 5004 5005 5006 5007 5008 5009 5010 5011 5012 5013 5014 5015 5016 5017 5018 5019 5020 5021 5022 5023 5024 5025 5026 5027 5028 5029 5030 5031 5032 5033 5034 5035 5036 5037 5038 5039 5040 5041 5042 5043 5044 5045 5046 5047 5048 5049 5050 5051 5052 5053 5054 5055 5056 5057 5058 5059 5060 5061 5062 5063 5064 5065 5066 5067 5068 5069 5070 5071 7365 7366 7367 7368 7369 7370 7371 7372 7373 7374 7388 7389 7390 7391 7392 7393 7394 7395 7396 7397 7398 7399 7400 7401 7402 7403 7404 7405 7406 7407 7408 7409 7410 7411 7412 7413 7414 7415 7416 7437 7438 7439 }
  ownedprovinces         = { 1115 1116 1114 1117 1118 1120 1113 1119 2644 2772 2773 2774 2775 2776 2777 2778 2779 4993 4994 4995 4996 4997 4998 4999 5000 5001 5002 5003 5004 5005 5006 5007 5008 5009 5010 5011 5012 5013 5014 5015 5016 5017 5018 5019 5020 5021 5022 5023 5024 5025 5026 5027 5028 5029 5030 5031 5032 5033 5034 5035 5036 5037 5038 5039 5040 5041 5042 5043 5044 5045 5046 5047 5048 5049 5050 5051 5052 5053 5054 5055 5056 7388 7389 7390 7391 7392 7393 7394 7395 7396 7397 7398 7399 7400 7401 7402 7403 7404 7405 7406 7407 7408 7409 7410 7411 7412 7413 7414 7415 7416 7437 7438 7439 }
  controlledprovinces    = { 1115 1116 1114 1117 1118 1120 1113 1119 2644 2772 2773 2774 2775 2776 2777 2778 2779 4993 4994 4995 4996 4997 4998 4999 5000 5001 5002 5003 5004 5005 5006 5007 5008 5009 5010 5011 5012 5013 5014 5015 5016 5017 5018 5019 5020 5021 5022 5023 5024 5025 5026 5027 5028 5029 5030 5031 5032 5033 5034 5035 5036 5037 5038 5039 5040 5041 5042 5043 5044 5045 5046 5047 5048 5049 5050 5051 5052 5053 5054 5055 5056 7388 7389 7390 7391 7392 7393 7394 7395 7396 7397 7398 7399 7400 7401 7402 7403 7404 7405 7406 7407 7408 7409 7410 7411 7412 7413 7414 7415 7416 7437 7438 7439 }

  techapps               = { 4500 4510 4520 4530 4540 4550 4010 4020 4600 4610 4620 4630 4120 4130 2860 2870 2880 2020 1830 1840 1850 7600 7610 2620 2010 2630 2290 2300 2310 2800 2450 21180 21190 2810 2820 2510 1010 1020 1030 1040 1050 1060 1070 1080 1090 13060 13070 13080 1310 1320 1330 1340 1350 1360 1370 1380 5700 5710 5010 5020 5810 5820 5050 5830 5800 5080 5090 5310 54010 54020 54030 5316 5326 5600 5610 5620 3810 14000 14010 14020 1910 1920 1930 1940 1950 1960 1970 3010 3020 3030 3040 3720 3730 3736 3740 3750 3900 27480 27490 27500 27510 27520 27530 27540 27550 27570 27580 27590 27600 9030 9020 27560 27460 27470 9010 9140 6500 6510 6530 6580 6600 6610 6680 6620 6630 6640 6650 6660 6670 6540 6910 6560 8010 8020 8040 8050 8060 8070 8080 8100 8110 8120 8150 8160 8200 8210 8500 8510 8520 8600 8900 8910 8920 8930 8940 }

  policy = {
    date              = { year = 0 month = january day = 0 }
    democratic        = 4
    political_left    = 4
    freedom           = 3
    free_market       = 5
    professional_army = 5
    defense_lobby     = 5
    interventionism   = 5
  }
  headofstate            = { type = 9 id = 425011 } # G.H.H. Villiers Lord Clarendon
  headofgovernment       = { type = 9 id = 425024 } # D. F. Malan
  foreignminister        = { type = 9 id = 425034 } # D. F. Malan
  armamentminister       = { type = 9 id = 425046 } # Nicolaas Havenga
  ministerofsecurity     = { type = 9 id = 425005 } # H.G. Lawrence
  ministerofintelligence = { type = 9 id = 425006 } # Jan C. Smuts
  chiefofstaff           = { type = 9 id = 425007 } # Pierre van Ryneveld
  chiefofarmy            = { type = 9 id = 425008 } # Pierre van Ryneveld
  chiefofnavy            = { type = 9 id = 425009 } # Pierre van Ryneveld
  chiefofair             = { type = 9 id = 425010 } # Pierre van Ryneveld

  landunit = {
    id       = { type = 26600 id = 1 }
    name     = "South African Army"
    location = 1120
    division = {
      id             = { type = 26600 id = 2 }
      name           = "1st South African Infantry Division"
      type           = infantry
      model          = 6
      strength       = 5
    }
    division = {
      id             = { type = 26600 id = 3 }
      name           = "2nd South African Infantry Division"
      type           = infantry
      model          = 6
      strength       = 5
    }
    division = {
      id             = { type = 26600 id = 4 }
      name           = "3rd South African Infantry Division"
      type           = infantry
      model          = 6
      strength       = 5
    }
    division = {
      id             = { type = 26600 id = 5 }
      name           = "1st Mounted Commando Division"
      type           = cavalry
      model          = 6
      strength       = 10
    }
  }

  navalunit = {
    id       = { type = 26600 id = 7 }
    name     = "South African Navy"
    location = 1116
    base     = 1116
    division = {
      id             = { type = 26600 id = 13 }
      name           = "4th SAN Transport Flotilla"
      type           = transport
    }
    division = {
      id             = { type = 26600 id = 14 }
      name           = "5th SAN Transport Flotilla"
      type           = transport
    }
    division = {
      id             = { type = 26600 id = 15 }
      name           = "6th SAN Transport Flotilla"
      type           = transport
    }
    division = {
      id             = { type = 26600 id = 2326 }
      name           = "1st SAN Destroyer Flotilla"
      type           = destroyer
    }
    division = {
      id             = { type = 26600 id = 2327 }
      name           = "2nd SAN Destroyer Flotilla"
      type           = destroyer
    }
    division = {
      id             = { type = 26600 id = 2328 }
      name           = "3rd SAN Destroyer Flotilla"
      type           = destroyer
    }
  }
  navalunit = {
    id       = { type = 26600 id = 2324 }
    name     = "RSAN Fleet 1"
    location = 1116
    base     = 1116
    division = {
      id             = { type = 26600 id = 2329 }
      name           = "4th SAN Destroyer Flotilla"
      type           = destroyer
    }
    division = {
      id             = { type = 26600 id = 2330 }
      name           = "5th SAN Destroyer Flotilla"
      type           = destroyer
    }
    division = {
      id             = { type = 26600 id = 2331 }
      name           = "6th SAN Destroyer Flotilla"
      type           = destroyer
    }
    division = {
      id             = { type = 26600 id = 10 }
      name           = "1st SAN Transport Flotilla"
      type           = transport
    }
    division = {
      id             = { type = 26600 id = 11 }
      name           = "2nd SAN Transport Flotilla"
      type           = transport
    }
    division = {
      id             = { type = 26600 id = 12 }
      name           = "3rd SAN Transport Flotilla"
      type           = transport
    }
  }
}
