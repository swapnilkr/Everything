function cycle(list){
  
  for (var cycleStart = 0; cycleStart < list.length-1; cycleStart++) {
    var item = list[cycleStart]

   
    var pos = cycleStart
    for (var i = cycleStart + 1; i < list.length; i++) {
    
      if (list[i] < item) pos += 1
    }

  
    if (pos == cycleStart) continue

  
    while (item == list[pos]) { pos++ }
    const swap = list[pos]
    list[pos] = item // TODO: Write
    item = swap
    console.log('write')

   
    while (pos != cycleStart) {
   
      pos = cycleStart
      for (var i = cycleStart + 1; i < list.length; i++) {
        if (list[i] < item) pos += 1
      }

     
      while (item == list[pos]) {
        pos += 1
      }
      const swap = list[pos]
      list[pos] = item
      item = swap
    }
  
  return list;
}
