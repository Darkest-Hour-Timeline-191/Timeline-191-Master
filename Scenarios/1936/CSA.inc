##############################
# Country definition for CSA #
##############################
province = {
  id = 632 # Norfolk
  anti_air = 4
  air_base = { size = 10 current_size = 10 }
  naval_base = { size = 10 current_size = 10 }
}
province = {
  id = 637 # Charlotte
  anti_air = 1
  air_base = { size = 4 current_size = 4 }
}
province = {
  id = 644 # Charleston, SC
  anti_air = 1
  air_base = { size = 4 current_size = 4 }
}
province = {
  id = 648 # Jacksonville
  anti_air = 1
  air_base = { size = 4 current_size = 4 }
}
province = {
  id = 651 # Miami
  anti_air = 1
  air_base = { size = 10 current_size = 10 }
  naval_base = { size = 10 current_size = 10 }
}
province = {
  id = 654 # La Habana
  anti_air = 1
  naval_base = { size = 4 current_size = 4 }
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
  naval_base = { size = 8 current_size = 8 }
}

#####################
# Country main data #
#####################

country = {
  tag                = CSA
  capital            = 633 # Richmond
  manpower           = 100
  # Resource Reserves
  energy         = 1000
  metal          = 1000
  rare_materials = 500
  oil            = 500
  supplies       = 500
  money          = 10

  diplomacy = {
    relation = { tag = USA value = -50 }
    relation = { tag = ENG value = 100 }
    relation = { tag = MEX value = 100 }
    relation = { tag = DOM value = 100 }
    relation = { tag = GER value = -50 }
    relation = { tag = FRA value = 150 }
    relation = { tag = IRE value = 75 }
    relation = { tag = JAP value = 50 }
    relation = { tag = CHI value = 50 }
  }
  SpyInfo                = { country = "USA" NumberOfSpies = 2 }
  SpyInfo                = { country = "MEX" NumberOfSpies = 1 }
  SpyInfo                = { country = "DOM" NumberOfSpies = 1 }
  SpyInfo                = { country = "GER" NumberOfSpies = 1 }
  SpyInfo                = { country = "ENG" NumberOfSpies = 1 }

  nationalprovinces      = { 632 633 639 2718 6468 6469 6471 636 637 643 6482 6483 6484 6485 6486 6487 6488 642 671 673 2717 6450 6451 6452 6453 6454 619 644 645 6478 6479 6480 6481 646 647 670 6440 6441 6442 6443 6444 6445 6449 678 2255 6430 6431 6432 6433 6434 6435 6436 6439 648 649 650 651 676 677 6316 6317 6318 6319 6320 6321 6322 6323 675 2259 2692 6424 6425 6426 6427 6428 6429 679 680 681 682 6272 6273 6274 6275 6276 6277 683 684 6278 6279 6280 6281 6282 6283 6284 686 711 715 716 717 2713 2714 2715 2716 6242 6243 6244 6245 6246 6247 6253 6254 6255 6256 6257 6259 6261 6262 6263 6265 6266 6267 6268 6269 6270 6271 638 6470 6472 654 655 656 657 894 4278 4279 4280 4281 4282 4283 4284 739 740 2698 2705 2706 4357 4358 4359 4360 4361 4362 4363 4364 4365 4366 4367 4368 6946 6947 7256 }
  ownedprovinces         = { 632 633 639 2718 6468 6469 6471 634 636 637 643 6482 6483 6484 6485 6486 6487 6488 642 671 673 2717 6450 6451 6452 6453 6454 619 644 645 6478 6479 6480 6481 646 647 670 2711 6440 6441 6442 6443 6444 6445 6446 6447 6448 6449 672 678 2255 6430 6431 6432 6433 6434 6435 6436 6437 6438 6439 648 649 650 651 676 677 6316 6317 6318 6319 6320 6321 6322 6323 675 2259 2692 6424 6425 6426 6427 6428 6429 679 680 681 682 6272 6273 6274 6275 6276 6277 683 6278 6279 6280 6281 6282 6283 6284 686 711 715 716 717 748 2712 2713 2714 2715 2716 6242 6243 6244 6245 6246 6247 6253 6254 6255 6256 6257 6259 6261 6262 6263 6265 6266 6267 6268 6269 6270 6271 654 655 656 657 894 4278 4279 4280 4281 4282 4283 4284 739 740 2698 2705 2706 4357 4358 4359 4360 4361 4362 4363 4364 4365 4366 4367 4368 6946 6947 7256 }
  controlledprovinces    = { 632 633 639 2718 6468 6469 6471 634 636 637 643 6482 6483 6484 6485 6486 6487 6488 642 671 673 2717 6450 6451 6452 6453 6454 619 644 645 6478 6479 6480 6481 646 647 670 2711 6440 6441 6442 6443 6444 6445 6446 6447 6448 6449 672 678 2255 6430 6431 6432 6433 6434 6435 6436 6437 6438 6439 648 649 650 651 676 677 6316 6317 6318 6319 6320 6321 6322 6323 675 2259 2692 6424 6425 6426 6427 6428 6429 679 680 681 682 6272 6273 6274 6275 6276 6277 683 6278 6279 6280 6281 6282 6283 6284 686 711 715 716 717 748 2712 2713 2714 2715 2716 6242 6243 6244 6245 6246 6247 6253 6254 6255 6256 6257 6259 6261 6262 6263 6265 6266 6267 6268 6269 6270 6271 654 655 656 657 894 4278 4279 4280 4281 4282 4283 4284 739 740 2698 2705 2706 4357 4358 4359 4360 4361 4362 4363 4364 4365 4366 4367 4368 6946 6947 7256 }

  techapps               = { 4500 4510 4520 4530 4540 4550 4010 2860 2870 2880 2020 2290 2300 2310 7600 7610 1010 1020 1030 1040 1050 1060 1910 1920 1930 1940 1950 1960 1970 1980 13060 13070 13080 1310 1320 1330 1340 1160 1170 1180 1190 1200 1210 1220 1230 1240 2800 2450 21180 21190 5700 5710 5010 5020 5310 54010 54020 54030 5316 5326 5810 5820 5050 5830 5800 5080 5090 14000 14010 14020 5600 5610 5620 5630 6500 6510 6530 6580 6600 6610 6680 6620 6630 6640 6650 6660 6670 6540 6910 27480 27490 27500 27510 27520 27530 27540 27550 27570 27580 27590 27600 9030 9020 27560 27460 27470 }

  policy = {
    date              = { year = 0 month = january day = 0 }
    democratic        = 7
    political_left    = 3
    freedom           = 9
    free_market       = 8
    professional_army = 1
    defense_lobby     = 2
    interventionism   = 1
  }
  headofstate            = { type = 9 id = 600057 } # Burton Mitchell
  headofgovernment       = { type = 9 id = 600058 } # Lamartine G. Hardman
  foreignminister        = { type = 9 id = 600003 } # Ransome Judd Williams
  armamentminister       = { type = 9 id = 600004 } # Spessard Lindsay Holland
  ministerofsecurity     = { type = 9 id = 600005 } # Paul Burney Johnson Sr.
  ministerofintelligence = { type = 9 id = 600006 } # Robert G. Cherry
  chiefofstaff           = { type = 9 id = 600007 } # William S. Graves
  chiefofarmy            = { type = 9 id = 600008 } # Henry Jouett
  chiefofnavy            = { type = 9 id = 600009 } # Edward I. Bourne
  chiefofair             = { type = 9 id = 600010 } # Kenneth Walker

  landunit = {
    id       = { type = 14800 id = 1 }
    name     = "Army of Northern Virginia"
    location = 633
    division = {
      id             = { type = 13501 id = 2 }
      name           = "Army of Northern Virginia"
      type           = hq
      model          = 2
      strength       = 100
    }
  }

  navalunit = {
    id       = { type = 13501 id = 3 }
    name     = "CS Atlantic Fleet"
    location = 632
    base     = 632
    division = {
      id             = { type = 13501 id = 4 }
      name           = "CSS Fort Sumter"
      type           = heavy_cruiser
      model          = 3
    }
  }
}
