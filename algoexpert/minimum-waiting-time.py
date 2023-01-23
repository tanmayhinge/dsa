def minimumWaitingTime(queries):
    totalWeightTime = 0
    queries.sort()
    for i in range(len(queries)):
        totalWeightTime += (len(queries)-(i+1))*queries[i]
    
    return totalWeightTime
