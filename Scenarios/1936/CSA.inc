##############################
# Country definition for CSA #
##############################
province = {
  id = 632 # Norfolk
  anti_air = 4
  coastalfort = 2
  air_base = { size = 10 current_size = 10 }
  naval_base = { size = 10 current_size = 10 }
}
province = {
  id = 633 # Richmond
  landfort = 4
  air_base = { size = 2 current_size = 2 }
}
province = {
  id = 637 # Charlotte
  anti_air = 1
  air_base = { size = 4 current_size = 4 }
}
province = {
  id = 639 # Roanoke
  landfort = 3
}
province = {
  id = 644 # Charleston, SC
  anti_air = 1
  air_base = { size = 4 current_size = 4 }
  naval_base = { size = 4 current_size = 4 }
}
province = {
  id = 648 # Jacksonville
  anti_air = 1
  air_base = { size = 2 current_size = 2 }
}
province = {
  id = 651 # Miami
  anti_air = 1
  air_base = { size = 4 current_size = 4 }
  naval_base = { size = 4 current_size = 4 }
}
province = {
  id = 654 # La Habana
  anti_air = 1
  air_base = { size = 2 current_size = 2 }
  naval_base = { size = 6 current_size = 6 }
  supplypool = 20
}
province = {
  id = 670 # Atlanta
  anti_air = 1
  air_base = { size = 4 current_size = 4 }
}
province = {
  id = 673 # Memphis
  anti_air = 1
  air_base = { size = 4 current_size = 4 }
}
province = {
  id = 678 # Mobile
  anti_air = 1
  air_base = { size = 4 current_size = 4 }
}
province = {
  id = 716 # Houston
  anti_air = 1
  air_base = { size = 4 current_size = 4 }
}
province = {
  id = 748 # Corpus Christi
  anti_air = 1
  air_base = { size = 6 current_size = 6 }
  naval_base = { size = 8 current_size = 8 }
}
province = {
  id = 894 # Guantanamo Bay Naval Base
  anti_air = 1
  air_base = { size = 4 current_size = 4 }
  naval_base = { size = 4 current_size = 4 }
}
province = {
  id = 4359 # Guaymas
  anti_air = 1
  landfort = 1
  air_base = { size = 2 current_size = 2 }
  naval_base = { size = 2 current_size = 2 }
}
province = {
  id = 6471 # Newport News
  landfort = 3
}

#####################
# Country main data #
#####################

country = {
  tag                = CSA
  capital            = 633 # Richmond
  dissent            = 10
  manpower           = 175
  # Resource Reserves
  energy         = 1000
  metal          = 1000
  rare_materials = 500
  oil            = 500
  supplies       = 500
  money          = 10

  transports     = 25
  escorts        = 5

  diplomacy = {
    relation = { tag = USA value = -100 }
    relation = { tag = QUE value = -75 }
    relation = { tag = ENG value = 100 }
    relation = {
      tag        = MEX
      value      = 100
      guaranteed = { year = 1933 month = october day = 29 }
    }
    relation = { tag = FRA value = 150 }
    relation = { tag = ENG value = 150 }
    relation = { tag = DOM value = 100 }
    relation = { tag = BRA value = 25 }
    relation = { tag = PRU value = 25 }
    relation = { tag = U09 value = -25 } # Austria-Hungary
    relation = { tag = U89 value = -25 } # Jamaica
    relation = { tag = GER value = -50 }
    relation = { tag = JAP value = -125 }
  }
  SpyInfo                = { country = "USA" NumberOfSpies = 3 }
  SpyInfo                = { country = "MEX" NumberOfSpies = 1 }
  SpyInfo                = { country = "DOM" NumberOfSpies = 1 }
  SpyInfo                = { country = "GER" NumberOfSpies = 1 }
  SpyInfo                = { country = "ENG" NumberOfSpies = 1 }
  SpyInfo                = { country = "BRA" NumberOfSpies = 1 }
  SpyInfo                = { country = "QUE" NumberOfSpies = 1 }

  nationalprovinces      = { 632 633 639 2718 6468 6469 6471 634 636 637 643 6482 6483 6484 6485 6486 6487 6488 642 671 673 2717 6450 6451 6452 6453 6454 619 644 645 6478 6479 6480 6481 646 647 670 2711 6440 6441 6442 6443 6444 6445 6446 6447 6448 6449 672 678 2255 6430 6431 6432 6433 6434 6435 6436 6437 6438 6439 648 649 650 651 676 677 6316 6317 6318 6319 6320 6321 6322 6323 675 2259 2692 6424 6425 6426 6427 6428 6429 679 680 681 682 6272 6273 6274 6275 6276 6277 683 6278 6279 6280 6281 6282 6283 6284 686 711 715 716 717 748 2712 2713 2714 2715 2716 6242 6243 6244 6245 6246 6247 6253 6254 6255 6256 6257 6259 6261 6262 6263 6265 6266 6267 6268 6269 6270 6271 654 655 656 657 894 4278 4279 4280 4281 4282 4283 4284 739 740 2698 2705 4357 4358 4359 4360 4361 4362 4363 4364 4365 4366 4367 4368 6946 6947 7256
	# Kentucky
	640 641 6455 6456 6457 6458 6459 6460 6461 6462
	# rest of Texas
	718 719 6251 6250 6249 6248 6258 6252 6264 6266 6260 721
	# Sequoyah
	6224 6225 713 6228 793 6230 6229 6226 2682 6227
	# misc claims held by USA
	638 684 6470 6472
	}
  ownedprovinces         = { 632 633 639 2718 6468 6469 6471 634 636 637 643 6482 6483 6484 6485 6486 6487 6488 642 671 673 2717 6450 6451 6452 6453 6454 619 644 645 6478 6479 6480 6481 646 647 670 2711 6440 6441 6442 6443 6444 6445 6446 6447 6448 6449 672 678 2255 6430 6431 6432 6433 6434 6435 6436 6437 6438 6439 648 649 650 651 676 677 6316 6317 6318 6319 6320 6321 6322 6323 675 2259 2692 6424 6425 6426 6427 6428 6429 679 680 681 682 6272 6273 6274 6275 6276 6277 683 6278 6279 6280 6281 6282 6283 6284 686 711 715 716 717 748 2712 2713 2714 2715 2716 6242 6243 6244 6245 6246 6247 6253 6254 6255 6256 6257 6259 6261 6262 6263 6265 6266 6267 6268 6269 6270 6271 654 655 656 657 894 4278 4279 4280 4281 4282 4283 4284 739 740 2698 2705 4357 4358 4359 4360 4361 4362 4363 4364 4365 4366 4367 4368 6946 6947 7256 }
  controlledprovinces    = { 632 633 639 2718 6468 6469 6471 634 636 637 643 6482 6483 6484 6485 6486 6487 6488 642 671 673 2717 6450 6451 6452 6453 6454 619 644 645 6478 6479 6480 6481 646 647 670 2711 6440 6441 6442 6443 6444 6445 6446 6447 6448 6449 672 678 2255 6430 6431 6432 6433 6434 6435 6436 6437 6438 6439 648 649 650 651 676 677 6316 6317 6318 6319 6320 6321 6322 6323 675 2259 2692 6424 6425 6426 6427 6428 6429 679 680 681 682 6272 6273 6274 6275 6276 6277 683 6278 6279 6280 6281 6282 6283 6284 686 711 715 716 717 748 2712 2713 2714 2715 2716 6242 6243 6244 6245 6246 6247 6253 6254 6255 6256 6257 6259 6261 6262 6263 6265 6266 6267 6268 6269 6270 6271 654 655 656 657 894 4278 4279 4280 4281 4282 4283 4284 739 740 2698 2705 4357 4358 4359 4360 4361 4362 4363 4364 4365 4366 4367 4368 6946 6947 7256 }

  techapps               = { 4500 4510 4520 4530 4540 4550 4010 4020 4600 4610 4620 4630 4120 7600 7610 2620 2010 2290 2300 2310 2800 2450 21180 21190 21200 2810 2820 2510 1010 1020 1030 1040 1050 1060 1070 1080 1090 1910 1920 1930 1940 1950 1960 1970 1980 13060 13070 13080 1310 1320 1330 1340 1160 1170 1180 1190 1200 1210 1220 1230 1240 1830 1840 1850 1860 5700 5710 5010 5020 5310 54010 54020 54030 5316 5326 5810 5820 5050 5830 5060 5800 5080 5090 5560 8010 8020 8040 8050 3010 3020 3030 3040 3110 3120 3130 3210 3220 3230 3410 3420 3430 3440 3450 3610 3620 3630 4300 4310 4320 4330 4800 4810 4820 4700 4710 3720 3730 3736 3740 3750 3900 3810 5600 5610 5620 5630 6500 6510 6530 6580 6600 6610 6680 6620 6630 6640 6650 6660 6670 6540 6910 27480 27490 27500 27510 27520 27530 27540 27550 27570 27580 27590 27600 9030 9020 27560 27460 27470 9010 2900 2910 2920 2930 1350 1360 1370 3310 3050 3140 8060 8070 8080 8900 1560 2630 2860 2870 2880 5327 14000 }

  policy = {
    date              = { year = 0 month = january day = 0 }
    democratic        = 7
    political_left    = 3
    freedom           = 9
    free_market       = 8
    professional_army = 2
    defense_lobby     = 2
    interventionism   = 2
  }
  headofstate            = { type = 9 id = 600064 } # Burton Mitchel
  headofgovernment       = { type = 9 id = 600065 } # Jonathan Jackson
#  foreignminister        = { type = 9 id = 600003 } # Ransome Judd Williams
#  armamentminister       = { type = 9 id = 600004 } # Spessard Lindsay Holland
#  ministerofsecurity     = { type = 9 id = 600005 } # Paul Burney Johnson Sr.
#  ministerofintelligence = { type = 9 id = 600006 } # Robert G. Cherry
  chiefofstaff           = { type = 9 id = 600007 } # William S. Graves
#  chiefofarmy            = { type = 9 id = 600008 } # Henry Jouett
  chiefofnavy            = { type = 9 id = 600046 } # Edward I. Bourne
  chiefofair             = { type = 9 id = 600085 } # Kenneth Walker

	landunit = {
		id       = { type = 14800 id = 1 }
		name     = "Army of Northern Virginia"
		location = 633 # Richmond
	division = {
		id             = { type = 13501 id = 2 }
		name           = "Army of Northern Virginia"
		type           = hq
		model          = 1
	}
	division = {
		id             = { type = 13501 id = 3 }
		name           = "1st 'R.E. Lee' Division"
		type           = infantry
		model          = 6
	}    
	division = {
		id             = { type = 13501 id = 4 }
		name           = "2nd 'Longstreet' Division"
		type           = infantry
		model          = 6
	}
  }

	landunit = {
		id       = { type = 14800 id = 5 }
		name     = "Army of Tennessee"
		location = 673 # Memphis
	division = {
		id             = { type = 13501 id = 6 }
		name           = "Army of Tennessee"
		type           = hq
		model          = 1
	}
	division = {
		id             = { type = 13501 id = 7 }
		name           = "6th 'A.S. Johnston' Division"
		type           = infantry
		model          = 6
	}    
	division = {
		id             = { type = 13501 id = 8 }
		name           = "7th 'Bragg' Division"
		type           = infantry
		model          = 5
	}   
	division = {
		id             = { type = 13501 id = 9 }
		name           = "8th 'Beauregard' Division"
		type           = infantry
		model          = 5
	}
  }

	landunit = {
		id       = { type = 14800 id = 10 }
		name     = "Havana Garrison"
		location = 654 # La Habana (Havana)
	division = {
		id             = { type = 13501 id = 11 }
		name           = "Havana Garrison"
		type           = garrison
		model          = 2
		strength       = 80
		max_strength   = 80
		locked         = yes
	}
  }
	navalunit = {
		id       = { type = 13501 id = 12 }
		name     = "Atlantic Fleet"
		location = 632 # Norfolk
		base     = 632
	division = {
		id             = { type = 13501 id = 13 }
		name           = "CSS Fort Sumter"
		type           = heavy_cruiser
		model          = 3
    }
	division = {
		id             = { type = 13501 id = 14 }
		name           = "CSS Charleston"
		type           = heavy_cruiser
		model          = 3
    }
	division = {
		id             = { type = 13501 id = 15 }
		name           = "CSS Biloxi"
		type           = light_cruiser
		model          = 3
	}
  }

	navalunit = {
		id       = { type = 13501 id = 16 }
		name     = "Pacific Fleet"
		location = 4359 # Guaymas
		base     = 4359
	division = {
		id             = { type = 13501 id = 17 }
		name           = "CSS Lexington"
		type           = heavy_cruiser
		model          = 3
		strength       = 95
    }
	division = {
		id             = { type = 13501 id = 18 }
		name           = "CSS Paducah"
		type           = light_cruiser
		model          = 3
		strength       = 90
    }
	division = {
		id             = { type = 13501 id = 19 }
		name           = "4th Destroyer Division"
		type           = destroyer
		model          = 2
		strength       = 80
		max_strength   = 80
	}
  }

	navalunit = {
		id       = { type = 13501 id = 20 }
		name     = "Caribbean Squadron"
		location = 651 # Miami
		base     = 651
	division = {
		id             = { type = 13501 id = 21 }
		name           = "3rd Destroyer Division"
		type           = destroyer
		model          = 3
		strength       = 80
		max_strength   = 80
	}
  }

	airunit = { 
		id       = { type = 13501 id = 22 }
		name     = "Virginia Aero Club"
		location = 632 # Norfolk
		base     = 632
	division = {
		id             = { type = 13501 id = 23 }
		name           = "Virginia Aero Club"
		type           = d_10
		model          = 0
		strength       = 15
		max_strength   = 20
	}
  }

	airunit = { 
		id       = { type = 13501 id = 24 }
		name     = "Confederate Citrus Company"
		location = 651 # Miami
		base     = 651
	division = {
		id             = { type = 13501 id = 25 }
		name           = "Confederate Citrus Company"
		type           = d_10
		model          = 0
		strength       = 15
		max_strength   = 20
	}
  }
}
