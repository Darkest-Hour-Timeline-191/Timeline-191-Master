##############################
# Country definition for SAU #
##############################

country = {
  tag                = SAU
  capital            = 1807 # ar-Riyad
  manpower           = 200
  # Resource Reserves
  energy         = 1000
  metal          = 1000
  rare_materials = 500
  oil            = 500
  supplies       = 500
  money          = 10

  diplomacy = {
    relation = { tag = AFG value = 50 }
    relation = { tag = AUS value = 50 }
    relation = { tag = ENG value = 100 }
    relation = { tag = FRA value = 10 }
    relation = { tag = IRQ value = 125 }
    relation = { tag = ITA value = -25 }
    relation = { tag = OMN value = 125 }
    relation = { tag = PER value = 100 }
    relation = { tag = SOV value = 1 }
    relation = { tag = TUR value = 50 }
    relation = { tag = YEM value = 125 }
  }

  nationalprovinces      = { 1821 1818 1809 1808 1807 1805 1804 2856 2857 2858 2859 2861 2862 2863 2358 4197 4167 4168 4169 4170 4171 4172 4173 4174 4175 4176 4177 4178 4179 4180 4181 4182 4183 4184 5414 5415 5416 5417 5418 5419 6926 6927 6928 }
  ownedprovinces         = { 1821 1818 1808 1807 1805 2856 2857 2858 2859 2861 2863 2358 4172 4173 4174 4175 4176 4177 4178 4179 4180 4181 4182 4183 4184 5415 5416 5417 5418 6926 6927 6928 }
  controlledprovinces    = { 1821 1818 1808 1807 1805 2856 2857 2858 2859 2861 2863 2358 4172 4173 4174 4175 4176 4177 4178 4179 4180 4181 4182 4183 4184 5415 5416 5417 5418 6926 6927 6928 }

  techapps               = { 4500 4510 4520 4530 2860 2290 7600 7610 1010 1020 1030 1040 1050 1060 1910 1920 1930 1940 1950 1960 13060 13070 13080 1310 1320 1330 1340 5700 6500 6510 6530 6580 6600 6610 6680 6620 6630 6640 6650 6660 6670 6540 6910 27480 27490 27500 27510 27520 27530 27540 27550 27570 27580 27590 27600 9030 9020 27560 27460 27470 9010 }

  policy = {
    date              = { year = 0 month = january day = 0 }
    democratic        = 3
    political_left    = 4
    freedom           = 3
    free_market       = 3
    professional_army = 5
    defense_lobby     = 5
    interventionism   = 3
  }
  headofstate            = { type = 9 id = 63001 }
  headofgovernment       = { type = 9 id = 63002 }
  foreignminister        = { type = 9 id = 63003 }
  armamentminister       = { type = 9 id = 63004 }
  ministerofsecurity     = { type = 9 id = 63005 }
  ministerofintelligence = { type = 9 id = 63006 }
  chiefofstaff           = { type = 9 id = 63007 }
  chiefofarmy            = { type = 9 id = 63008 }
  chiefofnavy            = { type = 9 id = 63009 }
  chiefofair             = { type = 9 id = 63010 }

  landunit = {
    id       = { type = 22600 id = 1 }
    name     = "Royal Saudi Army"
    location = 1807
    division = {
      id             = { type = 22600 id = 2 }
      name           = "1. Royal Saudi Inf.Div."
      type           = infantry
      model          = 5
      strength       = 100
    }
    division = {
      id             = { type = 22600 id = 3 }
      name           = "Royal Lifeguard"
      type           = infantry
      model          = 5
      strength       = 100
    }
    division = {
      id             = { type = 22600 id = 4 }
      name           = "Royal Saudi Cav. 'Medina'"
      type           = cavalry
      model          = 6
      strength       = 100
    }
  }
}
