class VAR1{
    private void FUN1() throws Throwable
        {
            if (VAR2 == 5)
            {
                int[] VAR3 = new int[10];
                
                for (int VAR4 = 0; VAR4 < VAR3.length; VAR4++)
                {
                    VAR5.writeLine("" + VAR4 + "" + (VAR3[VAR4] = VAR4));
                }
            }
        }
};