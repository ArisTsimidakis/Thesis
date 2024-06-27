class VAR1{
    public void FUN1() throws Throwable
        {
            short VAR2;
            if(VAR3.FUN2())
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
    
                
                VAR2 = 2;
    
            }
    
            if(VAR3.FUN2())
            {
                
                short VAR13 = (VAR14)(VAR2 * VAR2);
                VAR3.writeLine("" + VAR13);
            }
            else
            {
    
                
                
                if ((VAR2 != VAR15.VAR16) && (VAR2 != VAR17.VAR16) && (Math.abs(VAR2) <= (long)Math.sqrt(VAR7.VAR18)))
                {
                    short VAR13 = (VAR14)(VAR2 * VAR2);
                    VAR3.writeLine("" + VAR13);
                }
                else
                {
                    VAR3.writeLine("");
                }
    
            }
        }
};