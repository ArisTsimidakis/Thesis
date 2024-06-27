class VAR1{
    private void FUN1() throws Throwable
        {
            short VAR2;
            {
                short VAR3;
    
                
                VAR3 = -1;
    
                
                BufferedReader VAR4 = null;
                InputStreamReader VAR5 = null;
                try
                {
                    VAR5 = new InputStreamReader(System.in, "");
                    VAR4 = new BufferedReader(VAR5);
                    String VAR6 = VAR4.readLine();
                    if (VAR6 != null)
                    {
                        VAR3 = VAR7.FUN2(VAR6.trim());
                    }
                }
                catch (IOException VAR8)
                {
                    VAR9.VAR10.log(VAR11.VAR12, "", VAR8);
                }
                catch (NumberFormatException VAR13)
                {
                    VAR9.VAR10.log(VAR11.VAR12, "", VAR13);
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
                        VAR9.VAR10.log(VAR11.VAR12, "", VAR8);
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
                            VAR9.VAR10.log(VAR11.VAR12, "", VAR8);
                        }
                    }
                }
    
                VAR2 = VAR3;
            }
            {
                short VAR3 = VAR2;
    
                
                
                if ((VAR3 != VAR14.VAR15) && (VAR3 != VAR16.VAR15) && (Math.abs(VAR3) <= (long)Math.sqrt(VAR7.VAR17)))
                {
                    short VAR18 = (VAR19)(VAR3 * VAR3);
                    VAR9.writeLine("" + VAR18);
                }
                else
                {
                    VAR9.writeLine("");
                }
    
            }
        }
};