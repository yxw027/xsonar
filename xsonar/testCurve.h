int curveModel[2048] = {5, 5, 7, 10, 14, 18, 23, 31, 40, 48, 54, 61, 72, 72, 73, 75, 77, 80, 83, 79, 78, 77, 78, 78, 78, 78, 79, 76, 76, 77, 77, 78, 76, 77, 76, 77, 75, 76, 76, 75, 78, 77, 80, 78, 73, 74, 76, 74, 75, 72, 73, 72, 75, 75, 73, 72, 73, 73, 71, 71, 73, 73, 70, 73, 70, 71, 71, 72, 72, 69, 69, 73, 71, 73, 71, 72, 71, 72, 71, 71, 69, 70, 70, 69, 71, 69, 68, 69, 70, 68, 69, 69, 69, 68, 68, 67, 66, 65, 66, 68, 66, 67, 67, 69, 66, 68, 66, 65, 65, 65, 65, 68, 64, 65, 65, 67, 65, 65, 64, 65, 64, 68, 64, 64, 64, 64, 61, 64, 63, 64, 65, 63, 61, 62, 64, 61, 63, 61, 63, 62, 61, 62, 61, 60, 62, 61, 63, 60, 60, 61, 60, 60, 61, 60, 58, 61, 59, 59, 58, 60, 60, 60, 60, 60, 59, 59, 59, 60, 60, 58, 58, 58, 58, 59, 58, 60, 59, 59, 60, 57, 59, 58, 57, 57, 57, 59, 57, 57, 59, 59, 56, 58, 56, 59, 59, 57, 56, 56, 57, 57, 55, 55, 56, 56, 55, 57, 55, 57, 56, 57, 55, 56, 57, 56, 55, 53, 55, 56, 56, 55, 55, 56, 55, 53, 54, 56, 56, 56, 55, 56, 56, 54, 55, 54, 54, 55, 54, 55, 54, 54, 53, 54, 53, 53, 51, 52, 52, 55, 53, 51, 52, 51, 53, 49, 51, 52, 51, 51, 49, 51, 50, 49, 48, 48, 49, 48, 48, 49, 48, 48, 49, 48, 47, 48, 46, 47, 47, 46, 47, 45, 46, 45, 46, 46, 45, 45, 45, 45, 44, 45, 44, 43, 45, 43, 42, 43, 44, 44, 42, 42, 42, 42, 43, 42, 41, 41, 40, 40, 40, 41, 40, 41, 39, 41, 39, 39, 40, 38, 38, 39, 38, 40, 38, 38, 37, 37, 38, 38, 37, 37, 36, 37, 36, 37, 36, 38, 36, 35, 35, 36, 36, 35, 36, 34, 35, 35, 35, 35, 36, 35, 36, 35, 34, 34, 34, 34, 34, 33, 34, 33, 34, 33, 33, 32, 32, 33, 32, 31, 32, 32, 32, 31, 31, 31, 31, 31, 31, 31, 31, 30, 31, 29, 30, 30, 29, 30, 29, 29, 29, 28, 29, 29, 29, 29, 29, 29, 28, 28, 29, 27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 26, 26, 27, 27, 25, 25, 26, 26, 25, 26, 25, 25, 24, 25, 25, 25, 25, 25, 24, 24, 25, 25, 24, 24, 24, 23, 24, 24, 24, 24, 24, 24, 24, 24, 24, 24, 23, 23, 24, 23, 24, 23, 23, 24, 24, 22, 23, 23, 22, 22, 22, 23, 22, 23, 22, 22, 21, 22, 21, 23, 22, 22, 22, 22, 22, 22, 22, 22, 22, 21, 22, 22, 22, 23, 22, 22, 21, 22, 22, 22, 22, 22, 21, 21, 21, 21, 22, 22, 22, 22, 22, 22, 22, 22, 22, 22, 22, 21, 22, 22, 22, 22, 21, 22, 21, 21, 21, 21, 21, 20, 21, 20, 21, 20, 21, 21, 20, 21, 20, 20, 20, 20, 20, 19, 20, 19, 19, 19, 19, 20, 19, 19, 19, 18, 18, 18, 18, 17, 18, 17, 17, 17, 18, 17, 18, 16, 16, 16, 16, 17, 16, 16, 16, 16, 15, 16, 15, 15, 15, 15, 15, 15, 14, 14, 14, 15, 15, 15, 14, 14, 14, 14, 14, 14, 15, 15, 14, 15, 14, 15, 14, 14, 14, 14, 14, 14, 14, 13, 14, 13, 13, 13, 12, 12, 11, 12, 11, 11, 11, 10, 10, 10, 10, 10, 9, 10, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 8, 8, 8, 8, 8, 8, 7, 8, 7, 7, 7, 7, 7, 6, 6, 6, 7, 7, 7, 7, 8, 9, 11, 10, 10, 11, 13, 17, 15, 17, 24, 30, 25, 8, 7, 6, 6, 5, 5, 4, 4, 3, 3, 3, 3, 3, 3, 2, 2, 3, 3, 3, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 1, 2, 1, 1, 2, 2, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 2, 2, 4, 5, 4, 3, 5, 8, 8, 5, 8, 10, 9, 6, 5, 3, 3, 4, 5, 134, 44, 9, 10, 4, 4, 5, 5, 5, 6, 8, 10, 10, 3, 4, 4, 3, 2, 3, 3, 2, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 2, 2, 2, 3, 4, 5, 5, 6, 7, 9, 10, 12, 12, 14, 15, 16, 17, 25, 27, 26, 21, 20, 18, 17, 16, 14, 13, 12, 11, 10, 8, 8, 7, 6, 5, 5, 5, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 5, 4, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 7, 7, 7, 7, 8, 8, 8, 8, 9, 9, 9, 10, 11, 11, 11, 11, 12, 12, 12, 12, 13, 13, 13, 14, 13, 14, 15, 15, 14, 14, 15, 15, 15, 14, 13, 14, 14, 14, 14, 14, 15, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 15, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 13, 13, 13, 13, 14, 13, 14, 13, 14, 13, 13, 13, 14, 13, 13, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 15, 15, 15, 15, 15, 15, 16, 15, 15, 15, 16, 15, 16, 15, 16, 16, 16, 16, 16, 16, 16, 17, 17, 17, 17, 16, 17, 18, 17, 17, 17, 17, 17, 16, 16, 17, 17, 17, 17, 18, 17, 17, 18, 18, 18, 18, 18, 17, 18, 18, 17, 18, 18, 18, 18, 18, 18, 18, 18, 18, 18, 18, 19, 18, 18, 19, 18, 18, 19, 18, 19, 18, 19, 18, 19, 19, 18, 19, 19, 19, 19, 19, 19, 20, 18, 19, 19, 19, 18, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 20, 20, 20, 20, 20, 20, 20, 19, 19, 20, 20, 19, 20, 20, 19, 20, 21, 20, 20, 21, 22, 21, 21, 21, 21, 21, 21, 22, 21, 21, 22, 21, 22, 22, 22, 22, 22, 22, 23, 23, 23, 23, 23, 23, 24, 24, 23, 23, 24, 24, 24, 24, 24, 26, 23, 24, 24, 25, 25, 26, 26, 25, 25, 26, 26, 26, 25, 26, 27, 25, 27, 27, 27, 27, 27, 27, 27, 28, 27, 28, 28, 27, 28, 28, 29, 27, 28, 29, 28, 28, 28, 28, 29, 29, 29, 30, 31, 30, 31, 32, 30, 31, 31, 31, 31, 31, 31, 31, 32, 31, 31, 31, 32, 32, 32, 32, 32, 32, 33, 33, 32, 33, 33, 33, 34, 32, 34, 34, 34, 36, 35, 34, 35, 34, 34, 36, 35, 35, 36, 37, 36, 36, 36, 36, 38, 36, 38, 37, 37, 37, 38, 37, 38, 38, 37, 38, 38, 35, 39, 38, 39, 39, 40, 39, 40, 39, 40, 39, 38, 39, 38, 39, 38, 39, 40, 39, 40, 40, 39, 39, 40, 37, 40, 39, 40, 41, 41, 39, 40, 40, 39, 41, 41, 41, 41, 42, 41, 41, 40, 40, 41, 40, 41, 41, 42, 41, 42, 42, 43, 41, 42, 42, 41, 41, 42, 41, 42, 42, 42, 45, 43, 44, 43, 43, 42, 42, 43, 43, 43, 43, 44, 43, 42, 44, 43, 43, 43, 44, 44, 43, 42, 43, 43, 45, 43, 43, 43, 44, 44, 42, 43, 43, 43, 44, 43, 44, 44, 44, 45, 44, 44, 43, 45, 43, 43, 45, 44, 45, 45, 43, 44, 46, 44, 45, 45, 44, 43, 45, 45, 46, 45, 45, 44, 43, 45, 44, 44, 44, 45, 45, 44, 45, 46, 46, 47, 45, 46, 45, 45, 45, 44, 46, 44, 44, 44, 45, 44, 44, 45, 47, 46, 46, 47, 46, 46, 46, 45, 46, 47, 47, 46, 46, 47, 48, 46, 47, 47, 48, 45, 46, 49, 47, 48, 48, 48, 47, 46, 48, 47, 49, 47, 47, 47, 46, 46, 48, 49, 48, 47, 48, 47, 47, 47, 47, 46, 49, 47, 50, 47, 48, 49, 48, 48, 48, 49, 50, 51, 52, 49, 49, 51, 51, 50, 49, 51, 51, 49, 51, 50, 50, 50, 49, 50, 51, 50, 50, 52, 51, 51, 52, 48, 46, 44, 37, 31, 28, 22, 16, 12, 8, 6, 5, 3};