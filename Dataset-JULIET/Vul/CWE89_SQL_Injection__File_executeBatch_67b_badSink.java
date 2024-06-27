class VAR1{
    public void FUN1(VAR2.Container VAR3 ) throws Throwable
        {
            String VAR4 = VAR3.VAR5;
    
            if (VAR4 != null)
            {
                String VAR6[] = VAR4.split("");
                int VAR7 = 0;
                Connection VAR8 = null;
                Statement VAR9 = null;
                try
                {
                    VAR8 = VAR10.FUN2();
                    VAR9 = VAR8.createStatement();
                    for (int VAR11 = 0; VAR11 < VAR6.length; VAR11++)
                    {
                        
                        VAR9.FUN3("" + VAR6[VAR11] + "");
                    }
                    int VAR12[] = VAR9.FUN4();
                    for (int VAR11 = 0; VAR11 < VAR6.length; VAR11++)
                    {
                        if (VAR12[VAR11] > 0)
                        {
                            VAR7++;
                        }
                    }
                    VAR10.writeLine("" + VAR7 + "" + VAR6.length + "");
                }
                catch (SQLException VAR13)
                {
                    VAR10.VAR14.log(VAR15.VAR16, "", VAR13);
                }
                finally
                {
                    try
                    {
                        if (VAR9 != null)
                        {
                            VAR9.close();
                        }
                    }
                    catch (SQLException VAR13)
                    {
                        VAR10.VAR14.log(VAR15.VAR16, "", VAR13);
                    }
    
                    try
                    {
                        if (VAR8 != null)
                        {
                            VAR8.close();
                        }
                    }
                    catch (SQLException VAR13)
                    {
                        VAR10.VAR14.log(VAR15.VAR16, "", VAR13);
                    }
                }
            }
    
        }
};