class VAR1{
    private void FUN1() throws Throwable
        {
            long VAR2;
            if (VAR3.FUN2())
            {
                
                VAR2 = -1;
                
                BufferedReader VAR4 = null;
                InputStreamReader VAR5 = null;
                try
                {
                    VAR5 = new InputStreamReader(System.in, "");
                    VAR4 = new BufferedReader(VAR5);
                    String VAR6 = VAR4.readLine();
                    if (VAR6 != null)
                    {
                        VAR2 = VAR7.FUN3(VAR6.trim());
                    }
                }
                catch (IOException VAR8)
                {
                    VAR3.VAR9.log(VAR10.VAR11, "", VAR8);
                }
                catch (NumberFormatException VAR12)
                {
                    VAR3.VAR9.log(VAR10.VAR11, "", VAR12);
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
                    catch (IOException VAR8)
                    {
                        VAR3.VAR9.log(VAR10.VAR11, "", VAR8);
                    }
                    finally
                    {
                        try
                        {
                            if (VAR5 != null)
                            {
                                VAR5.close();
                            }
                        }
                        catch (IOException VAR8)
                        {
                            VAR3.VAR9.log(VAR10.VAR11, "", VAR8);
                        }
                    }
                }
            }
            else
            {
                
                VAR2 = 0L;
            }
    
            if (VAR3.FUN4())
            {
                
                VAR3.writeLine("");
            }
            else
            {
    
                
                if (VAR2 < VAR7.VAR13)
                {
                    VAR2++;
                    long VAR14 = (long)(VAR2);
                    VAR3.writeLine("" + VAR14);
                }
                else
                {
                    VAR3.writeLine("");
                }
    
            }
        }
};