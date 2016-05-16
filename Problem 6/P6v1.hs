module Main where

main = do
    let _sum = sum (map (^2) [1..100]) :: Int
    let square = sum [1..100]^2 :: Int
    let ans = square - _sum
    print ans
