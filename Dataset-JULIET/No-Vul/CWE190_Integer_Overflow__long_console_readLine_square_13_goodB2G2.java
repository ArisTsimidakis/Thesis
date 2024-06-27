class VAR1{
    private void FUN1() throws Throwable
        {
            long VAR2;
            if (VAR3.VAR4==5)
            {
                
                VAR2 = -1;
                
                BufferedReader VAR5 = null;
                InputStreamReader VAR6 = null;
                try
                {
                    VAR6 = new InputStreamReader(System.in, "");
                    VAR5 = new BufferedReader(VAR6);
                    String VAR7 = VAR5.readLine();
                    if (VAR7 != null)
                    {
                        VAR2 = VAR8.FUN2(VAR7.trim());
                    }
                }
                catch (IOException VAR9)
                {
                    VAR3.VAR10.log(VAR11.VAR12, "", VAR9);
                }
                catch (NumberFormatException VAR13)
                {
                    VAR3.VAR10.log(VAR11.VAR12, "", VAR13);
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
                    catch (IOException VAR9)
                    {
                        VAR3.VAR10.log(VAR11.VAR12, "", VAR9);
                    }
                    finally
                    {
                        try
                        {
                            if (VAR6 != null)
                            {
                                VAR6.close();
                            }
                        }
                        catch (IOException VAR9)
                        {
                            VAR3.VAR10.log(VAR11.VAR12, "", VAR9);
                        }
                    }
                }
            }
            else
            {
                
                VAR2 = 0L;
            }
    
            if (VAR3.VAR4==5)
            {
                
                
                if ((VAR2 != VAR14.VAR15) && (VAR2 != VAR8.VAR15) && (Math.abs(VAR2) <= (long)Math.sqrt(VAR8.VAR16)))
                {
                    long VAR17 = (long)(VAR2 * VAR2);
                    VAR3.writeLine("" + VAR17);
                }
                else
                {
                    VAR3.writeLine("");
                }
            }
        }
};