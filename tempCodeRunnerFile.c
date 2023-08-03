do
            {
                if (n == 2)
                {
                    return 0;
                }
                printf("%d, ", nextTerm);
                t1 = t2;
                t2 = nextTerm;
                nextTerm = t1 + t2;
                i++;
            } while (i <= n);
        