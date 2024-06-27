class VAR1{
    public void FUN1() throws Throwable
        {
            byte VAR2;
    
            switch (6)
            {
            case 6:
                
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
                        VAR2 = VAR6.FUN2(VAR5.trim());
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
                break;
            default:
                
                VAR2 = 0;
                break;
            }
    
            switch (7)
            {
            case 7:
                if(VAR2 > 0) 
                {
                    
                    byte VAR13 = (byte)(VAR2 * 2);
                    VAR8.writeLine("" + VAR13);
                }
                break;
            default:
                
                VAR8.writeLine("");
                break;
            }
        }
};