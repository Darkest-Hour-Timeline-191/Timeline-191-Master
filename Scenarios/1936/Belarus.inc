##############################
# Country definition for BLR #
##############################
province = { id = 212 landfort = 2 } # Minsk
province = {
  id = 217 # Vitebsk
  anti_air = 2
  air_base = { size = 2 current_size = 2 }
}
province = {
  id = 220 # Mahilou
  air_base = { size = 8 current_size = 8 }
}
province = { id = 225 landfort = 2 } # Mazyr
province = { id = 272 landfort = 2 } # Sluck
province = {
  id = 273 # Luban
  landfort = 2
  air_base = { size = 2 current_size = 2 }
}
province = { id = 1153 landfort = 2 } # Barysau
province = { id = 1874 landfort = 1 } # Polack
province = { id = 3400 landfort = 1 } # Lepiel
province = { id = 3401 landfort = 1 } # Pietrykau
province = { id = 7065 landfort = 1 } # Starobin

#####################
# Country main data #
#####################

country = {
  tag                = BLR
  puppet             = GER
  control            = GER
  capital            = 212 # Minsk
  manpower           = 20
  # Resource Reserves
  energy         = 500
  metal          = 500
  rare_materials = 250
  oil            = 250
  supplies       = 250
  money          = 100

  diplomacy = {
    relation = { tag = GER value = 200 }
  }

  nationalprovinces      = { 212 217 218 220 221 225 272 273 274 7065 3401 7066 1566 562 3275 1153 3276 95 213 3400 210 3277 6517 3403 3402 1874 3399 }
  ownedprovinces         = { 212 217 218 220 221 225 272 273 274 7065 3401 7066 1566 562 3275 1153 3276 95 213 3400 210 3277 3403 3402 1874 3399 }
  controlledprovinces    = { 212 217 218 220 221 225 272 273 274 7065 3401 7066 1566 562 3275 1153 3276 95 213 3400 210 3277 3403 3402 1874 3399 }

  policy = {
    democratic        = 8
    political_left    = 3
    freedom           = 6
    free_market       = 7
    professional_army = 4
    defense_lobby     = 6
    interventionism   = 6
  }
  headofstate            = { type = 6 id = 470116 } # S.M. Waldemar I of Prussia
  headofgovernment       = { type = 6 id = 470118 } # Yazip Losik
  chiefofnavy            = { type = 6 id = 470097 } # Under Army Command
  chiefofair             = { type = 6 id = 470100 } # Under Army Command
}
