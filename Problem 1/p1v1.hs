main = do
    let sum = 0
    for [1..10] $ \i -> do
        if i `mod` 3 == 0
            then let sum = sum + i
            else if i `mod` 5 == 0
                    then let sum = sum + i
                    else return ()
    print sum