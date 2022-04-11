##############################
# Country definition for MAN #
##############################
province = {
  id = 1379 # Ha'erbin
  anti_air = 2
  air_base = { size = 2 current_size = 2 }
}

#####################
# Country main data #
#####################

country = {
  tag                = MAN
  puppet             = JAP
  control            = JAP
  capital            = 2241 # Changchun
  manpower           = 200
  # Resource Reserves
  energy         = 200
  metal          = 200
  rare_materials = 100
  oil            = 200
  supplies       = 100
  money          = 10
  free = {
    energy         = 14
    metal          = 7
    rare_materials = 4
  }

  diplomacy = {
    relation = { tag = CHC value = -100 }
    relation = { tag = CHI value = -100 }
    relation = { tag = CSX value = -75 }
    relation = { tag = CXB value = -75 }
    relation = { tag = CYN value = -75 }
    relation = { tag = CGX value = -75 }
    relation = { tag = GER value = 20 }
    relation = { tag = JAP value = 200 access = yes }
    relation = { tag = SIA value = 75 }
    relation = { tag = USA value = 1 }
  }

  nationalprovinces      = { 1389 1390 1377 1378 1375 1374 1379 1530 1380 1387 1382 1381 1394 1395 1396 2347 2349 2346 2345 2340 2341 2344 2338 2333 2487 2241 2511 2337 2246 2486 2281 2485 1388 2348 2317 1397 2318 3110 3755 3756 3757 3758 3759 3760 3774 1202 3090 5633 5634 5635 5636 5656 5657 5658 5659 5660 5661 5662 5663 5664 5665 5666 5667 5668 5669 5670 5671 5672 5673 5674 5675 5676 5677 5678 5679 5680 5681 5682 5683 5684 5685 5686 5687 5688 5689 5690 5691 5692 7911 }
  ownedprovinces         = { 1389 1390 1377 1378 1375 1374 1379 1530 1380 1387 1382 1381 1394 1395 1396 2347 2349 2346 2345 2340 2341 2344 2338 2333 2487 2241 2511 2337 2246 2486 2281 2485 1388 2348 2317 1397 2318 3110 3755 3756 3757 3758 3759 3760 3774 5633 5634 5635 5636 5656 5657 5658 5659 5660 5661 5662 5663 5664 5665 5666 5667 5668 5669 5670 5671 5672 5673 5674 5675 5676 5677 5678 5679 5680 5681 5682 5683 5684 5685 5686 5687 5688 5689 5690 5691 5692 7911 }
  controlledprovinces    = { 1389 1390 1377 1378 1375 1374 1379 1530 1380 1387 1382 1381 1394 1395 1396 2347 2349 2346 2345 2340 2341 2344 2338 2333 2487 2241 2511 2337 2246 2486 2281 2485 1388 2348 2317 1397 2318 3110 3755 3756 3757 3758 3759 3760 3774 5633 5634 5635 5636 5656 5657 5658 5659 5660 5661 5662 5663 5664 5665 5666 5667 5668 5669 5670 5671 5672 5673 5674 5675 5676 5677 5678 5679 5680 5681 5682 5683 5684 5685 5686 5687 5688 5689 5690 5691 5692 7911 }
  claimedprovinces       = { 5693 }

  techapps               = { 4500 4510 4520 4530 2860 2290 7600 7610 2620 2010 1010 1020 1030 1040 1050 1060 1910 1920 1930 1940 1950 1960 1970 13060 13070 13080 1310 1320 1330 1340 5700 5600 3810 1830 1840 5810 5820 5800 5080 27480 27490 27500 27510 27520 27530 27540 27550 27570 27580 27590 27600 9030 9020 27560 27460 27470 9010 6500 6510 6530 6580 6600 6610 6680 6620 6630 6640 6650 6660 6670 6540 6910 }

  policy = {
    date              = { year = 0 month = january day = 0 }
    democratic        = 1
    political_left    = 4
    freedom           = 3
    free_market       = 3
    professional_army = 2
    defense_lobby     = 8
    interventionism   = 8
  }
  headofstate            = { type = 9 id = 58001 }
  headofgovernment       = { type = 9 id = 58002 }
  foreignminister        = { type = 9 id = 58003 }
  armamentminister       = { type = 9 id = 58004 }
  ministerofsecurity     = { type = 9 id = 58005 }
  ministerofintelligence = { type = 9 id = 58006 }
  chiefofstaff           = { type = 9 id = 58007 }
  chiefofarmy            = { type = 9 id = 58008 }
  chiefofnavy            = { type = 9 id = 58009 }
  chiefofair             = { type = 9 id = 58010 }

  landunit = {
    id       = { type = 28500 id = 1 }
    name     = "Di'1 Fang'tien Jüntuan"
    location = 2241
    division = {
      id             = { type = 28500 id = 2 }
      name           = "1 Man'chu Lü"
      type           = militia
      model          = 4
      strength       = 50
    }
    division = {
      id             = { type = 28500 id = 3 }
      name           = "2 Man'chu Lü"
      type           = militia
      model          = 4
      strength       = 50
    }
    division = {
      id             = { type = 28500 id = 4 }
      name           = "3 Man'chu Lü"
      type           = militia
      model          = 4
      strength       = 50
    }
    division = {
      id             = { type = 28500 id = 5 }
      name           = "4 Man'chu Lü"
      type           = militia
      model          = 4
      strength       = 50
    }
    division = {
      id             = { type = 28500 id = 6 }
      name           = "5 Man'chu Lü"
      type           = militia
      model          = 4
      strength       = 50
    }
    division = {
      id             = { type = 28500 id = 7 }
      name           = "6 Man'chu Lü"
      type           = militia
      model          = 4
      strength       = 50
    }
  }
  landunit = {
    id       = { type = 28500 id = 8 }
    name     = "Di'2 Ji'lin Jüntuan"
    location = 2241
    division = {
      id             = { type = 28500 id = 9 }
      name           = "7 Man'chu Lü"
      type           = militia
      model          = 4
      strength       = 50
    }
    division = {
      id             = { type = 28500 id = 10 }
      name           = "8 Man'chu Lü"
      type           = militia
      model          = 4
      strength       = 50
    }
    division = {
      id             = { type = 28500 id = 11 }
      name           = "9 Man'chu Lü"
      type           = militia
      model          = 4
      strength       = 50
    }
    division = {
      id             = { type = 28500 id = 12 }
      name           = "10 Man'chu Lü"
      type           = militia
      model          = 4
      strength       = 50
    }
    division = {
      id             = { type = 28500 id = 13 }
      name           = "1 Man'chu Qi'Bing"
      type           = cavalry
      model          = 7
      strength       = 15
    }
    division = {
      id             = { type = 28500 id = 14 }
      name           = "2 Man'chu Qi'Bing"
      type           = cavalry
      model          = 7
      strength       = 15
    }
    division = {
      id             = { type = 28500 id = 15 }
      name           = "3 Man'chu Qi'Bing"
      type           = cavalry
      model          = 7
      strength       = 15
    }
  }
  landunit = {
    id       = { type = 28500 id = 16 }
    name     = "Di'3 Qiqihar Jüntuan"
    location = 2241
    division = {
      id             = { type = 28500 id = 17 }
      name           = "11 Man'chu Lü"
      type           = militia
      model          = 4
      strength       = 50
    }
    division = {
      id             = { type = 28500 id = 18 }
      name           = "12 Man'chu Lü"
      type           = militia
      model          = 4
      strength       = 50
    }
    division = {
      id             = { type = 28500 id = 19 }
      name           = "13 Man'chu Lü"
      type           = militia
      model          = 4
      strength       = 50
    }
    division = {
      id             = { type = 28500 id = 20 }
      name           = "14 Man'chu Lü"
      type           = militia
      model          = 4
      strength       = 50
    }
    division = {
      id             = { type = 28500 id = 21 }
      name           = "15 Man'chu Lü"
      type           = militia
      model          = 4
      strength       = 50
    }
    division = {
      id             = { type = 28500 id = 22 }
      name           = "4 Man'chu Qi'Bing"
      type           = cavalry
      model          = 7
      strength       = 15
    }
  }
  landunit = {
    id       = { type = 28500 id = 23 }
    name     = "Di'4 Harbin Jüntuan"
    location = 2241
    division = {
      id             = { type = 28500 id = 24 }
      name           = "16 Man'chu Lü"
      type           = militia
      model          = 4
      strength       = 50
    }
    division = {
      id             = { type = 28500 id = 25 }
      name           = "17 Man'chu Lü"
      type           = militia
      model          = 4
      strength       = 50
    }
    division = {
      id             = { type = 28500 id = 26 }
      name           = "18 Man'chu Lü"
      type           = militia
      model          = 4
      strength       = 50
    }
    division = {
      id             = { type = 28500 id = 27 }
      name           = "19 Man'chu Lü"
      type           = militia
      model          = 4
      strength       = 50
    }
    division = {
      id             = { type = 28500 id = 28 }
      name           = "20 Man'chu Lü"
      type           = militia
      model          = 4
      strength       = 50
    }
    division = {
      id             = { type = 28500 id = 29 }
      name           = "21 Man'chu Lü"
      type           = militia
      model          = 4
      strength       = 50
    }
    division = {
      id             = { type = 28500 id = 30 }
      name           = "22 Man'chu Lü"
      type           = militia
      model          = 4
      strength       = 50
    }
    division = {
      id             = { type = 28500 id = 31 }
      name           = "23 Man'chu Lü"
      type           = militia
      model          = 4
      strength       = 50
    }
    division = {
      id             = { type = 28500 id = 32 }
      name           = "5 Man'chu Qi'Bing"
      type           = cavalry
      model          = 7
      strength       = 15
    }
  }
  landunit = {
    id       = { type = 28500 id = 33 }
    name     = "Di'5 Chengde Jüntuan"
    location = 2241
    division = {
      id             = { type = 28500 id = 34 }
      name           = "24 Man'chu Lü"
      type           = militia
      model          = 4
      strength       = 50
    }
    division = {
      id             = { type = 28500 id = 35 }
      name           = "25 Man'chu Lü"
      type           = militia
      model          = 4
      strength       = 50
    }
    division = {
      id             = { type = 28500 id = 36 }
      name           = "26 Man'chu Lü"
      type           = militia
      model          = 4
      strength       = 50
    }
    division = {
      id             = { type = 28500 id = 37 }
      name           = "6 Man'chu Qi'Bing"
      type           = cavalry
      model          = 7
      strength       = 15
    }
  }
}
