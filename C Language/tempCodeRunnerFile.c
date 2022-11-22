void dequeue()
{
    if ((F == -1) && (R == -1))
        printf("Underflow\n");
    else if (F == R)
    {
        printf("Deleted = %d \n", Q[F]);
        F = R = 0;
    }
    else
    {
        printf("Deleted = %d \n", Q[F]);
        F = (1 + F) % N;
    }
}