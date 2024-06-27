class VAR1{
    private void FUN1() throws Throwable
        {
            short VAR2;
            if (FUN2())
            {
                
                VAR2 = -1;
                
                BufferedReader VAR3 = null;
                InputStreamReader VAR4 = null;
                try
                {
                    VAR4 = new InputStreamReader(System.in, "");
                    VAR3 = new BufferedReader(VAR4);
                    String VAR5 = VAR3.readLine();
                    if (VAR5 != null)
                    {
                        VAR2 = VAR6.FUN3(VAR5.trim());
                    }
                }
                catch (IOException VAR7)
                {
                    VAR8.VAR9.log(VAR10.VAR11, "", VAR7);
                }
                catch (NumberFormatException VAR12)
                {
                    VAR8.VAR9.log(VAR10.VAR11, "", VAR12);
                }
                finally
                {
                    
                    try
                    {
                        if (VAR3 != null)
                        {
                            VAR3.close();
                        }
                    }
                    catch (IOException VAR7)
                    {
                        VAR8.VAR9.log(VAR10.VAR11, "", VAR7);
                    }
                    finally
                    {
                        try
                        {
                            if (VAR4 != null)
                            {
                                VAR4.close();
                            }
                        }
                        catch (IOException VAR7)
                        {
                            VAR8.VAR9.log(VAR10.VAR11, "", VAR7);
                        }
                    }
                }
            }
            else
            {
                
                VAR2 = 0;
            }
    
            if (FUN4())
            {
                
                VAR8.writeLine("");
            }
            else
            {
    
                
                if (VAR2 > VAR6.VAR13)
                {
                    short VAR14 = (VAR15)(VAR2 - 1);
                    VAR8.writeLine("" + VAR14);
                }
                else
                {
                    VAR8.writeLine("");
                }
    
            }
        }
};