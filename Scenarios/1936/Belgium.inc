##############################
# Country definition for BEL #
##############################
province = {
  id = 45 # Brugge
  anti_air = 1
  naval_base = { size = 3 current_size = 3 }
}
province = {
  id = 50 # Antwerpen
  anti_air = 2
  air_base = { size = 3 current_size = 3 }
  naval_base = { size = 10 current_size = 10 }
}
province = {
  id = 51 # Brussel
  anti_air = 1
  air_base = { size = 6 current_size = 6 }
}
province = { id = 68 landfort = 2 anti_air = 2 } # Li�ge
province = { id = 1095 supplypool = 2 } # Boma
province = {
  id = 1098 # L�opoldville
  air_base = { size = 1 current_size = 1 }
}
province = {
  id = 2751 # Matadi
  air_base = { size = 1 current_size = 1 }
  naval_base = { size = 3 current_size = 3 }
}

#####################
# Country main data #
#####################

country = {
  tag                = BEL
  capital            = 51 # Brussel
  manpower           = 200
  # Resource Reserves
  energy         = 1000
  metal          = 1000
  rare_materials = 500
  oil            = 500
  supplies       = 500
  money          = 20
  transports     = 100
  escorts        = 20

  diplomacy = {
    relation = { tag = AST value = 75 }
    relation = { tag = CAN value = 150 }
    relation = { tag = DEN value = 100 }
    relation = { tag = ENG value = 150 }
    relation = { tag = FIN value = 100 }
    relation = { tag = FRA value = 120 }
    relation = { tag = GER value = 20 }
    relation = { tag = HOL value = 150 }
    relation = { tag = IRE value = 75 }
    relation = { tag = ITA value = -5 }
    relation = { tag = JAP value = -25 }
    relation = { tag = LUX value = 200 }
    relation = { tag = NOR value = 100 }
    relation = { tag = NZL value = 20 }
    relation = { tag = POR value = -20 }
    relation = { tag = SAF value = 35 }
    relation = { tag = SWE value = 100 }
    relation = { tag = USA value = 75 }
  }
  SpyInfo                = { country = "ENG" NumberOfSpies = 1 }
  SpyInfo                = { country = "FRA" NumberOfSpies = 3 }
  SpyInfo                = { country = "SOV" NumberOfSpies = 1 }
  SpyInfo                = { country = "GER" NumberOfSpies = 3 }
  SpyInfo                = { country = "DEN" NumberOfSpies = 1 }
  SpyInfo                = { country = "HOL" NumberOfSpies = 3 }
  SpyInfo                = { country = "LUX" NumberOfSpies = 1 }

  nationalprovinces      = { 51 45 50 52 65 68 69 70 2292 7044 7043 1082 }
  ownedprovinces         = { 45 50 51 52 65 68 69 1095 1142 1071 1072 1073 1074 1143 1144 1127 1098 2751 2752 2753 2754 2755 2756 2757 2758 2759 2760 4812 4813 4814 4815 4816 4817 4818 4819 4820 4821 4822 4823 4824 4825 4826 4827 4828 4829 4830 4831 4832 4833 4834 4835 4836 4837 4838 4839 4840 4841 4842 4843 4844 4845 4846 4847 4848 4849 4850 4851 4852 4853 4854 4855 4856 4857 4858 4859 4860 4861 4862 4863 4864 4865 4866 4867 4868 4869 4870 4871 4872 4873 4874 4875 4876 4877 4878 4879 4880 7038 7301 7302 7303 7364 }
  controlledprovinces    = { 45 50 51 52 65 68 69 1095 1142 1071 1072 1073 1074 1143 1144 1127 1098 2751 2752 2753 2754 2755 2756 2757 2758 2759 2760 4812 4813 4814 4815 4816 4817 4818 4819 4820 4821 4822 4823 4824 4825 4826 4827 4828 4829 4830 4831 4832 4833 4834 4835 4836 4837 4838 4839 4840 4841 4842 4843 4844 4845 4846 4847 4848 4849 4850 4851 4852 4853 4854 4855 4856 4857 4858 4859 4860 4861 4862 4863 4864 4865 4866 4867 4868 4869 4870 4871 4872 4873 4874 4875 4876 4877 4878 4879 4880 7038 7301 7302 7303 7364 }

  techapps               = { 1010 1020 1030 1040 1050 1060 1070 1080 1090 1160 1170 1180 1190 1200 1210 1220 1230 1240 1396 1910 1920 1930 1940 1950 1960 1970 1980 13060 13070 13080 1310 1320 1330 1340 1350 1360 1370 1830 1840 1850 1860 2860 2870 2880 2020 7600 7610 2620 2010 2630 2640 2290 2300 2310 2800 2450 21180 21190 2810 2820 2510 3010 3720 3730 3900 3810 4500 4510 4520 4530 4540 4550 4010 4020 4600 4610 4620 4630 4120 5310 54010 54020 54030 5316 5326 5600 5610 5620 5630 5700 5710 5010 5810 5820 5050 5830 5060 5800 5080 5090 14000 14010 14020 6500 6510 6530 6580 6600 6610 6680 6620 6630 6640 6650 6660 6670 6540 6910 6560 6030 6110 27480 27490 27500 27510 27520 27530 27540 27550 27570 27580 27590 27600 9030 9020 27560 27460 27470 9010 }

  policy = {
    date              = { year = 0 month = january day = 0 }
    democratic        = 9
    political_left    = 3
    freedom           = 10
    free_market       = 9
    professional_army = 3
    defense_lobby     = 2
    interventionism   = 2
  }
  headofstate            = { type = 9 id = 70001 } # Leopold III
  headofgovernment       = { type = 9 id = 70002 } # Paul Van Zeeland
  foreignminister        = { type = 9 id = 70003 } # Paul Van Zeeland
  armamentminister       = { type = 9 id = 70004 } # Albert Dev�ze
  ministerofsecurity     = { type = 9 id = 70005 } # Eug�ne Soudan
  ministerofintelligence = { type = 9 id = 70006 } # Albert Dev�ze
  chiefofstaff           = { type = 9 id = 70007 } # Oscar Cumont
  chiefofarmy            = { type = 9 id = 70008 } # Victor van Strydonck de Burkel
  chiefofnavy            = { type = 9 id = 70009 } # G. Timmermans
  chiefofair             = { type = 9 id = 70010 } # L.F.E. Wouters

  landunit = {
    id       = { type = 11500 id = 1 }
    name     = "Corps de Cavalerie"
    location = 51
    division = {
      id             = { type = 11500 id = 2 }
      name           = "1�re Division de cavalerie"
      type           = cavalry
      model          = 8
      extra          = artillery
      brigade_model  = 5
      strength       = 50
    }
    division = {
      id             = { type = 11500 id = 3 }
      name           = "2�me Division de cavalerie"
      type           = cavalry
      model          = 8
      strength       = 50
    }
  }
  landunit = {
    id       = { type = 11500 id = 4 }
    name     = "Corps des chasseurs ardennais"
    location = 51
    division = {
      id             = { type = 11500 id = 5 }
      name           = "1�re Division de chasseurs ardennais"
      type           = infantry
      model          = 8
      extra          = armored_car
      brigade_model  = 3
      strength       = 55
    }
  }
  landunit = {
    id       = { type = 11500 id = 6 }
    name     = "Ier Corps d'arm�e"
    location = 51
    division = {
      id             = { type = 11500 id = 7 }
      name           = "1�re Division d'infanterie"
      type           = infantry
      model          = 7
      extra          = artillery
      brigade_model  = 6
      strength       = 50
    }
    division = {
      id             = { type = 11500 id = 8 }
      name           = "2�me Division d'infanterie"
      type           = infantry
      model          = 7
      strength       = 50
    }
    division = {
      id             = { type = 11500 id = 9 }
      name           = "13�me Division d'infanterie"
      type           = infantry
      model          = 6
      strength       = 5
    }
    division = {
      id             = { type = 11500 id = 10 }
      name           = "14�me Division d'infanterie"
      type           = infantry
      model          = 6
      strength       = 5
    }
  }
  landunit = {
    id       = { type = 11500 id = 11 }
    name     = "II�me Corps d'arm�e"
    location = 51
    division = {
      id             = { type = 11500 id = 12 }
      name           = "3�me Division d'infanterie"
      type           = infantry
      model          = 7
      extra          = artillery
      brigade_model  = 6
      strength       = 50
    }
    division = {
      id             = { type = 11500 id = 13 }
      name           = "4�me Division d'infanterie"
      type           = infantry
      model          = 7
      strength       = 50
    }
    division = {
      id             = { type = 11500 id = 14 }
      name           = "15�me Division d'infanterie"
      type           = infantry
      model          = 6
      strength       = 5
    }
    division = {
      id             = { type = 11500 id = 15 }
      name           = "16�me Division d'infanterie"
      type           = infantry
      model          = 6
      strength       = 5
    }
  }
  landunit = {
    id       = { type = 11500 id = 16 }
    name     = "III�me Corps d'arm�e"
    location = 51
    division = {
      id             = { type = 11500 id = 17 }
      name           = "5�me Division d'infanterie"
      type           = infantry
      model          = 7
      extra          = artillery
      brigade_model  = 6
      strength       = 50
    }
    division = {
      id             = { type = 11500 id = 18 }
      name           = "6�me Division d'infanterie"
      type           = infantry
      model          = 7
      strength       = 50
    }
    division = {
      id             = { type = 11500 id = 19 }
      name           = "17�me Division d'infanterie"
      type           = infantry
      model          = 6
      strength       = 5
    }
    division = {
      id             = { type = 11500 id = 20 }
      name           = "18�me Division d'infanterie"
      type           = infantry
      model          = 6
      strength       = 5
    }
  }
  landunit = {
    id       = { type = 11500 id = 21 }
    name     = "1�re Brigade de la Force Publique"
    location = 51
    division = {
      id             = { type = 11500 id = 22 }
      name           = "1�re Brigade de la Force Publique"
      type           = militia
      model          = 3
      strength       = 90
    }
  }
  landunit = {
    id       = { type = 11500 id = 23 }
    name     = "2�me Brigade de la Force Publique"
    location = 51
    division = {
      id             = { type = 11500 id = 24 }
      name           = "2�me Brigade de la Force Publique"
      type           = militia
      model          = 3
      strength       = 90
    }
  }
  landunit = {
    id       = { type = 11500 id = 25 }
    name     = "3�me Brigade de la Force Publique"
    location = 51
    division = {
      id             = { type = 11500 id = 26 }
      name           = "3�me Brigade de la Force Publique"
      type           = militia
      model          = 3
      strength       = 90
    }
  }

  navalunit = {
    id       = { type = 11500 id = 27 }
    name     = "1ste Transportatie Smaldeel"
    location = 45
    base     = 45
    division = {
      id             = { type = 11500 id = 28 }
      name           = "1�re Transporte Naval"
      type           = transport
      model          = 1
    }
    division = {
      id             = { type = 11500 id = 29 }
      name           = "2de Smaldeel"
      type           = transport
      model          = 1
    }
    division = {
      id             = { type = 11500 id = 2322 }
      name           = "1�re Flottille de Contre-Torpilleur"
      type           = destroyer
    }
    division = {
      id             = { type = 11500 id = 2323 }
      name           = "2de Flotielje Torpedoboten"
      type           = destroyer
    }
  }
}
