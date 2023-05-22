#####################
# Country main data #
#####################
province = { id = 103 coastalfort = 1 } # Maarianhamina
province = {
  id = 132 # Petsamo
  air_base = { size = 1 current_size = 1 }
}
province = {
  id = 137 # Oulu
  anti_air = 1
  air_base = { size = 2 current_size = 2 }
  province_revoltrisk = 15
}
province = {
  id = 139 # Tampere
  anti_air = 2
  air_base = { size = 4 current_size = 4 }
}
province = {
  id = 141 # Turku
  coastalfort = 2
  anti_air = 2
  air_base = { size = 2 current_size = 2 }
  naval_base = { size = 6 current_size = 6 }
}
province = {
  id = 142 # Helsinki
  coastalfort = 1
  anti_air = 3
  air_base = { size = 3 current_size = 3 }
  naval_base = { size = 4 current_size = 4 }
}
province = {
  id = 143 # Kuolajärvi
  anti_air = 2
  air_base = { size = 10 current_size = 10 }
}
province = {
  id = 145 # Viipuri
  landfort = 8
  coastalfort = 2
  anti_air = 4
  air_base = { size = 1 current_size = 1 }
}
province = {
  id = 146 # Sortavala
  anti_air = 6
}
province = {
  id = 148 # Lahti
  anti_air = 1
}
province = {
  id = 3327 # Mikkeli
  anti_air = 2
  air_base = { size = 5 current_size = 5 }
}

country =
{ tag                    = FIN
  # Resource Reserves
  energy                 = 1000
  metal                  = 1000
  rare_materials         = 500
  oil                    = 500
  supplies               = 500
  money                  = 10
  capital                = 142
  manpower               = 200
  transports             = 10
  escorts                = 2
  diplomacy =
  { relation = { tag = AST value = 65 }
    relation = { tag = AUS value = 55 }
    relation = { tag = BEL value = 100 }
    relation = { tag = BUL value = 35 }
    relation = { tag = CZE value = 50 }
    relation = { tag = DEN value = 75 }
    relation = { tag = ENG value = 85 }
    relation = { tag = EST value = 120 }
    relation = { tag = FRA value = 85 }
    relation = { tag = GER value = 25 }
    relation = { tag = GRE value = 40 }
    relation = { tag = HOL value = 100 }
    relation = { tag = HUN value = 75 }
    relation = { tag = IRE value = 50 }
    relation = { tag = ITA value = 50 }
    relation = { tag = JAP value = 20 }
    relation = { tag = LAT value = 90 }
    relation = { tag = LIT value = 80 }
    relation = { tag = LUX value = 100 }
    relation = { tag = NOR value = 75 }
    relation = { tag = NZL value = 50 }
    relation = { tag = POL value = 100 }
    relation = { tag = POR value = 50 }
    relation = { tag = ROM value = 40 }
    relation = { tag = SAF value = 50 }
    relation = { tag = SOV value = 1 }
    relation = { tag = SPR value = 35 }
    relation = { tag = SWE value = 150 }
    relation = { tag = USA value = 90 }
    relation = { tag = YUG value = 35 }
  }
  SpyInfo                = { country = "ENG" NumberOfSpies = 1 }
  SpyInfo                = { country = "FRA" NumberOfSpies = 1 }
  SpyInfo                = { country = "SOV" NumberOfSpies = 4 }
  SpyInfo                = { country = "LAT" NumberOfSpies = 1 }
  SpyInfo                = { country = "LIT" NumberOfSpies = 2 }
  SpyInfo                = { country = "POL" NumberOfSpies = 3 }
  SpyInfo                = { country = "SWE" NumberOfSpies = 3 }
  SpyInfo                = { country = "NOR" NumberOfSpies = 4 }
  SpyInfo                = { country = "EST" NumberOfSpies = 2 }
  SpyInfo                = { country = "YUG" NumberOfSpies = 1 }
  SpyInfo                = { country = "HUN" NumberOfSpies = 1 }
  SpyInfo                = { country = "DEN" NumberOfSpies = 2 }
  SpyInfo                = { country = "USA" NumberOfSpies = 1 }
  SpyInfo                = { country = "ITA" NumberOfSpies = 1 }
  nationalprovinces      = { 103 123 130 131 132 133 134 136 137 138 139 140 141 142 143 144 145 146 147 148 149 150 151 152 183 184 2305 2630 2631 3323	3324 3325 3326 3327 3328 3329 3330 3331	3332 3333 3334 3335 3336 3337 3338 3339 3340 3344 3349 3347 3341 7148 7149 7150 7151 7152 7153 7154 7155 7156
  }
  ownedprovinces         = { 103 123 130 131 132 136 137 138 139 140 141 142 143 144 145 146 147 148 149 2305 2630 2631 3323 3324 3325 3326 3327 3328 3329 3330 3331 3332 3333 3334 3335	3336 3337 3338 3339 3340 3344 7148 7149 7150 7151 7152 7153 7154 7155
  }
  controlledprovinces    = { 103 123 130 131 132 136 137 138 139 140 141 142 143 144 145 146 147 148 149 2305 2630 2631 3323 3324 3325 3326 3327 3328 3329 3330 3331 3332 3333 3334 3335 3336 3337 3338 3339 3340 3344 7148 7149 7150 7151 7152 7153 7154 7155
  }
 claimedprovinces = { 128 3299 7170 7171 }
  # Western Minor Tech '36
  # Group C 1936 techs
  # ######################
	techapps = {
	# Manufacturing
	5810 5820 5050 5830
	# Construction Engineering 
	5800 5080 5090 
	# Agriculture  
	5700 5710 5010
	# Computers & Cryptography
	5310 54010 54020 54030 5316 5326
	# Oil Refining 
	5190
	# Medicine
	5600 5610 5620 
	# Winter equipment
	#5920

	# Infantry Division  
	1010 1020 1030 1040 1050 1060 1070 1080 1090
	# Mountain Division 
	1160 1170 1180 1190 1200 1210 1220 1230 1240 1250
	# Cavalry Division  
	13060 13070 13080 1310 1320 1330 1340 1350 1360
	# Engineers
	1830 1840 1850 1860
	# Supply 
	1910 1920 1930 1940 1950 1960

	# Tanks
	7600 7610 2620 2010 2630 2640 2646
	# Armoured Car  
	2860 2870 2880 2020
	# Field Artillery 
	2290 2300 2310 2900 2910 2920 2930
	# Static Anti-Air Artillery 
	2800 2450 21180 21190 
	# Anti-Air Artillery Brigade 
	2810 2820 2510
	# Anti-Tank Artillery 
	#2400

	# Hospital System 
	14000 14010 14020
	# Great War Land Doctrines (entente)
	6500 6510 6530 6580 6600 6610 6680 6620 6630 6640 6650 6660 6670 6540 6910
	# WWII Land Doctrines
	6390

	# Destroyer 
	3010 3020 3030 3040
	# Heavy Cruiser 
	3210 3220 3230
	# Submarine 
	3610 3620 3630 3640
	# Torpedo & ASW 18
	3720 3730 3736 3740 3750 3900
	# Troopships
	3810 3820

	# Naval Doctrines
	8010 8020 8040 8050 8070 8080 8100 8200 8500

	# Interceptor Fighter  
	4500 4510 4520 4530 4540 4550 4010 4020
	# Tactical Bomber 
	4600 4610 4620 4630 4120

	# Air Doctrines - ww2 techs
	27480 27490 27500 27510 27520 27530 27540 27550 27570 27580 27590 27600 9030 9020 27560 27460 27470 9010 
	
	} 
	
inventions = {  }
  policy =
  { date              = { year = 0 month = january day = 0 }
     democratic        = 9 
     political_left    = 1 
     free_market       = 9 
     freedom           = 7 
     professional_army = 4 
     defense_lobby     = 9 
     interventionism   = 4
  }
  headofstate            = { type = 9 id = 29001 }
  headofgovernment       = { type = 9 id = 29002 }
  foreignminister        = { type = 9 id = 29003 }
  armamentminister       = { type = 9 id = 29004 }
  ministerofsecurity     = { type = 9 id = 29005 }
  ministerofintelligence = { type = 9 id = 29006 }
  chiefofstaff           = { type = 9 id = 29007 }
  chiefofarmy            = { type = 9 id = 29008 }
  chiefofnavy            = { type = 9 id = 29009 }
  chiefofair             = { type = 9 id = 29010 }
 
   landunit = 
   {  location = 142 
     name     = "Maavoimat" 
     id       = {  type = 32000 id = 1  } 
     Division = 
     {  id       = {  type = 32000 id = 2  } 
       name     = "Päämaja" 
	   strength   = 10
       type     = hq 
       model    = 2 
      } 
     Division = 
     {  id            = {  type = 32000 id = 3  } 
       name          = "Ratsuväenprikatii" 
	   strength   = 20
       type          = cavalry
       model         = 8 
      } 
     Division = 
     {  id            = {  type = 32000 id = 4  } 
       name          = "6. Divisioona" 
	   strength   = 5
       type          = infantry 
       model         = 7 
      } 
     Division = 
     {  id            = {  type = 32000 id = 5  } 
       name          = "9. Divisioona" 
	   strength   = 5
       type          = infantry 
       model         = 7 
      } 
     Division = 
     {  id            = {  type = 32000 id = 6  } 
       name          = "14. Divisioona" 
	   strength   = 5
       type          = infantry 
       model         = 6 
      } 
     Division = 
     {  id            = {  type = 32000 id = 7  } 
       name          = "17. Divisioona" 
	   strength   = 5
       type          = infantry 
       model         = 6 
      } 
    } 
   landunit = 
   {  location = 142 
     name     = "I Armeijakunta" 
     id       = {  type = 32000 id = 8  } 
     Division = 
     {  id    = {  type = 32000 id = 9  } 
       name  = "1. Divisioona" 
	   strength   = 35
       type  = infantry 
       model = 8 
       extra = artillery 
	   brigade_model = 7
      } 
     Division = 
     {  id    = {  type = 32000 id = 10  } 
       name  = "2. Divisioona" 
	   strength   = 35
       type  = infantry 
       model = 8
       extra = anti_air 
	   brigade_model = 2
      } 
     Division = 
     {  id    = {  type = 32000 id = 11  } 
       name  = "3. Divisioona" 
	   strength   = 30
       type  = bergsjaeger 
       model = 6
      } 
    } 
   landunit = 
   {  location = 142 
     name     = "II Armeijakunta" 
     id       = {  type = 32000 id = 12  } 
     Division = 
     {  id    = {  type = 32000 id = 13  } 
       name  = "4. Divisioona" 
	   strength   = 5
       type  = infantry 
       model = 7
      } 
     Division = 
     {  id    = {  type = 32000 id = 14  } 
       name  = "5. Divisioona" 
	   strength   = 5
       type  = infantry 
       model = 7
      } 
     Division = 
     {  id    = {  type = 32000 id = 15  } 
       name  = "11. Divisioona" 
	   strength   = 5
       type  = infantry 
       model = 7
      } 
     Division = 
     {  id    = {  type = 32000 id = 16  } 
       name  = "15. Divisioona" 
	   strength   = 5
       type  = infantry 
       model = 6
      } 
     Division = 
     {  id    = {  type = 32000 id = 17  } 
       name  = "18. Divisioona" 
	   strength   = 5
       type  = infantry 
       model = 6
      } 
    } 
   landunit = 
   {  location = 142 
     name     = "III Armeijakunta" 
     id       = {  type = 32000 id = 18  } 
     Division = 
     {  id    = {  type = 32000 id = 19  } 
       name  = "8. Divisioona" 
	   strength   = 5
       type  = infantry 
       model = 7 
      } 
     Division = 
     {  id    = {  type = 32000 id = 20  } 
       name  = "10. Divisioona" 
	   strength   = 5
       type  = infantry 
       model = 7 
      } 
    } 
   landunit = 
   {  location = 142 
     name     = "IV Armeijakunta" 
     id       = {  type = 32000 id = 21  } 
     Division = 
     {  id    = {  type = 32000 id = 22  } 
       name  = "12. Divisioona" 
	   strength   = 5
       type  = bergsjaeger 
       model = 5 
      } 
     Division = 
     {  id    = {  type = 32000 id = 23  } 
       name  = "13. Divisioona" 
	   strength   = 5
       type  = bergsjaeger
       model = 5 
      } 
    } 
   landunit = 
   {  location = 142 
     name     = "VII Armeijakunta" 
     id       = {  type = 32000 id = 24  } 
     Division = 
     {  id    = {  type = 32000 id = 25  } 
       name  = "7. Divisioona" 
	   strength   = 5
       type  = infantry 
       model = 6 
      } 
     Division = 
     {  id    = {  type = 32000 id = 26  } 
       name  = "19. Divisioona" 
	   strength   = 5
       type  = infantry 
       model = 6 
      } 
    } 
   landunit = 
   {  location = 142 
     name     = "Kenttätäydennysprikaati" 
     id       = {  type = 32000 id = 27  } 
     Division = 
     {  id    = {  type = 32000 id = 28  } 
       name  = "21. Divisioona"
	   strength   = 5	   
       type  = infantry 
       model = 6 
      } 
     Division = 
     {  id    = {  type = 32000 id = 29  } 
       name  = "23. Divisioona"
	   strength   = 5	   
       type  = infantry 
       model = 6 
      } 
    } 

  airunit =
  { id = { type = 32000 id = 37 }
    name = "Suomen ilmavoimat"
    location = 142
    base = 142
    division =
    { id = { type = 32000 id = 38 }
      name = "Lentorykmentti 1"
      type = tactical_bomber
      model = 3
      strength = 30
    }
    division =
    { id = { type = 32000 id = 39 }
      name = "Lentorykmentti 2"
      type = interceptor
      model = 6
      strength = 30
    }
    division =
    { id = { type = 32000 id = 40 }
      name = "Lentorykmentti 4"
      type = tactical_bomber
      model = 4
      strength = 30
    }
  }
	navalunit = { 
		id = { type = 32000 id = 30 } 
		name = "Suomen Laivasto" 
		location = 142 
		base = 142 
		division = { 
			id = { type = 32000 id = 31 } 
			name = "Ilmarinen" 
			type = heavy_cruiser 
			model = 4 
			} 
		division = { 
			id = { type = 32000 id = 32 } 
			name = "Väinämöinen" 
			type = heavy_cruiser 
			model = 4 
			} 
		} 
	navalunit = { 
		id = { type = 32000 id = 35 } 
		name = "I. Laivasto" 
		location = 142 
		base = 142 
		division = { 
			id = { type = 32000 id = 36 } 
			name = "1. Sukellusvenelaivue" 
			type = submarine 
			model = 2 
			} 
		} 
landdivision = { dormant = yes id = { type = 32000 id = 400 }  name = "Ryhmä Talvela"  type = infantry model = 7 extra  = artillery brigade_model = 9 strength = 100 }
landdivision = { dormant = yes id = { type = 32000 id = 401 }  name = "Ahvenanmaa Prikaati"  type = garrison model = 4 strength = 30 max_strength = 30 }
landdivision = { dormant = yes id = { type = 32000 id = 402 }  name = "Ryhmä Pohjois-Suomen"  type = infantry model = 8 extra  = engineer brigade_model = 3 strength = 80 max_strength = 80 }
landdivision = { dormant = yes id = { type = 32000 id = 403 }  name = "Ryhmä Räsänen"  type = infantry model = 7 extra  = artillery brigade_model = 9 strength = 60 max_strength = 60 }
landdivision = { dormant = yes id = { type = 32000 id = 404 }  name = "Ryhmä Rautu"  type = infantry model = 7 extra  = artillery brigade_model = 9 strength = 80 max_strength = 80 }
landdivision = { dormant = yes id = { type = 32000 id = 405 }  name = "Ryhmä Metsäpirtti"  type = infantry model = 7 strength = 30 max_strength = 30 }
landdivision = { dormant = yes id = { type = 32000 id = 406 }  name = "Ryhmä Lipola"  type = infantry model = 7 strength = 40 max_strength = 40 }
landdivision = { dormant = yes id = { type = 32000 id = 407 }  name = "Ryhmä Muolaa"  type = bergsjaeger model = 8 strength = 60 max_strength = 60 }
landdivision = { dormant = yes id = { type = 32000 id = 408 }  name = "Ryhmä Uusikirkko"  type = infantry model = 7 strength = 50 max_strength = 50 }
  } 
 