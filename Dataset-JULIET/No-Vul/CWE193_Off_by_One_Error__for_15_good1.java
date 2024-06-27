class VAR1{
    private void FUN1() throws Throwable
        {
            switch (8)
            {
            case 7:
                
                VAR2.writeLine("");
                break;
            default:
                int[] VAR3 = new int[10];
                
                for (int VAR4 = 0; VAR4 < VAR3.length; VAR4++)
                {
                    VAR2.writeLine("" + VAR4 + "" + (VAR3[VAR4] = VAR4));
                }
                break;
            }
        }
};