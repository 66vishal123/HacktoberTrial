Begin
   define 10 lists as pocket
   for i := 0 to max -1 do
      m = 10i+1
      p := 10i
      for j := 0 to n-1 do
      temp := array[j] mod m
      index := temp / p
      pocket[index].append(array[j])
   done
   count := 0
   for j := 0 to radix do
      while pocket[j] is not empty
         array[count] := get first node of pocket[j] and delete it
         count := count +1
      done
   done
End
