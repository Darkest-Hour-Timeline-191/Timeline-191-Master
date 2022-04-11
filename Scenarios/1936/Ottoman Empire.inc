##############################
# Country definition for OTT #
##############################
province = {
  id = 404 # Hayfa
  province_revoltrisk = 5
}
province = {
  id = 407 # Azraq
  province_revoltrisk = 2
}
province = {
  id = 439 # Izmit
  anti_air = 4
  air_base = { size = 6 current_size = 6 }
  naval_base = { size = 10 current_size = 10 }
}
province = {
  id = 448 # Ankara
  anti_air = 4
  air_base = { size = 6 current_size = 6 }
}
province = {
  id = 1159 # Antakya
  naval_base = { size = 4 current_size = 4 }
}
province = {
  id = 1794 # Bairut
  anti_air = 2
  air_base = { size = 4 current_size = 4 }
  naval_base = { size = 2 current_size = 2 }
}
province = {
  id = 1796 #  'Amman 
  province_revoltrisk = 2
}
province = {
  id = 1797 # al-Quds
  anti_air = 1
  province_revoltrisk = 5
}
province = {
  id = 1798 # Tall Abib
  anti_air = 1
  air_base = { size = 4 current_size = 4 }
  naval_base = { size = 2 current_size = 2 }
  supplypool = 2
  province_revoltrisk = 5
}
province = {
  id = 1799 # Gazza
  province_revoltrisk = 5
}
province = {
  id = 1802 # Ma'an
  province_revoltrisk = 2
}
province = {
  id = 1803 # Madaba
  province_revoltrisk = 2
}
province = {
  id = 1804 # al-Madinah al-Munawwarah
  anti_air = 2
  air_base = { size = 1 current_size = 1 }
}
province = {
  id = 1823 # al-Basrah
  anti_air = 2
  naval_base = { size = 4 current_size = 4 }
}
province = { id = 1864 anti_air = 1 } # al-Hillah
province = {
  id = 1866 # al-Kut
  anti_air = 2
  air_base = { size = 4 current_size = 4 }
}
province = {
  id = 1881 # an-Nasira
  province_revoltrisk = 5
}
province = {
  id = 2862 # Jidda
  naval_base = { size = 3 current_size = 3 }
}
province = {
  id = 4166 # al-'Aqaba
  province_revoltrisk = 2
}
province = {
  id = 7285 # Ein Hasb'
  province_revoltrisk = 5
}

#####################
# Country main data #
#####################

country = {
  tag                = OTT
  capital            = 409 # Istanbul
  manpower           = 0
  # Resource Reserves
  energy         = 0
  metal          = 0
  rare_materials = 0
  oil            = 0
  supplies       = 0
  money          = 0

  nationalprovinces      = { 409 7056 2322 3398 2613 7057 7352 2321 2323 4133 2874 4134 7976 439 4132 2611 4140 4141 7061 2873 4131 437 2875 438 4135 408 1158 4139 4145 442 7062 4142 448 4136 441 4143 7063 4144 2880 7059 447 4137 440 2881 4138 7058 7351 449 4129 4130 2879 4128 450 7060 4148 445 443 4124 4122 1853 2882 4147 4146 7069 4126 1854 4127 7982 4120 1852 2878 2876 4125 444 418 5413 5412 4123 7259 2877 7068 4119 3430 446 1851 4118 1159 1855 1797 5414 4168 4170 1804 1809 2862 4171 4169 }
  ownedprovinces         = { 409 7056 2322 3398 2613 7057 4133 2874 4134 7976 439 4132 2611 4140 4141 7061 2873 4131 437 2875 438 4135 408 1158 4139 4145 442 7062 4142 448 4136 441 4143 7063 4144 2880 7059 447 4137 440 2881 4138 7058 7351 449 4129 4130 2879 4128 450 7060 4148 445 443 4124 4122 1853 2882 4147 4146 7069 4126 1854 4127 7982 4120 1852 2878 2876 4125 1855 4123 7259 2877 7068 4119 3430 446 1851 4118 1159 1862 7357 7355 7280 7281 1861 7353 4152 4156 2019 7977 710 1860 7349 2496 4155 4158 4154 4159 4160 7276 7350 4157 1865 4163 4164 4165 4162 1806 1791 1864 4153 4161 1866 1790 1823 6499 1822 1824 2885 4151 4150 7277 1863 7279 7354 2884 7356 1792 7358 1793 7359 407 2883 7278 1796 1795 7360 1794 7290 1881 1803 1797 404 1798 1802 406 7286 1799 7282 7283 1882 4167 7285 4166 7284 1800 4604 1801 4605 2899 5414 4168 4170 1804 1809 2862 4171 4169 }
  controlledprovinces    = { 409 7056 2322 3398 2613 7057 4133 2874 4134 7976 439 4132 2611 4140 4141 7061 2873 4131 437 2875 438 4135 408 1158 4139 4145 442 7062 4142 448 4136 441 4143 7063 4144 2880 7059 447 4137 440 2881 4138 7058 7351 449 4129 4130 2879 4128 450 7060 4148 445 443 4124 4122 1853 2882 4147 4146 7069 4126 1854 4127 7982 4120 1852 2878 2876 4125 1855 4123 7259 2877 7068 4119 3430 446 1851 4118 1159 1862 7357 7355 7280 7281 1861 7353 4152 4156 2019 7977 710 1860 7349 2496 4155 4158 4154 4159 4160 7276 7350 4157 1865 4163 4164 4165 4162 1806 1791 1864 4153 4161 1866 1790 1823 6499 1822 1824 2885 4151 4150 7277 1863 7279 7354 2884 7356 1792 7358 1793 7359 407 2883 7278 1796 1795 7360 1794 7290 1881 1803 1797 404 1798 1802 406 7286 7282 7283 1882 4167 7285 4166 7284 1800 4604 1801 4605 2899 5414 4168 4170 1804 1809 2862 4171 4169 1799 }
  claimedprovinces       = { 1862 7357 7355 7280 7281 1861 7353 4152 4156 2019 7977 710 1860 7349 2496 4155 4158 4154 4159 4160 7276 7350 4157 1865 4163 4164 4165 4162 1806 1791 1864 4153 4161 1866 1790 1823 6499 1822 1824 2885 4151 4150 7277 1863 7279 7354 2884 7356 1792 7358 1793 7359 407 2883 7278 1796 1795 7360 1794 7290 1881 1803 404 1798 1802 406 7286 7282 7283 1882 4167 7285 4166 7284 1800 4604 1801 4605 2899 1799 }

  policy = {
    democratic        = 8
    political_left    = 2
    freedom           = 6
    free_market       = 8
    professional_army = 5
    defense_lobby     = 4
    interventionism   = 4
  }
  headofstate            = { type = 6 id = 720053 } # Abdulmejid II
  headofgovernment       = { type = 6 id = 720069 } # Salih Hulusi Kezrak
  armamentminister       = { type = 6 id = 720025 } # Mehmet Cavit Pasha
  chiefofstaff           = { type = 6 id = 720188 } # Fevzi Çakmak
  chiefofarmy            = { type = 6 id = 720213 } # Fevzi Çakmak
}
