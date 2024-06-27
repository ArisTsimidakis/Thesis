class VAR1{
    public void FUN1() throws Throwable
        {
            float VAR2;
    
            VAR2 = -1.0f; 
            {
                File VAR3 = new File("");
                FileInputStream VAR4 = null;
                InputStreamReader VAR5 = null;
                BufferedReader VAR6 = null;
    
                try
                {
                    
                    VAR4 = new FileInputStream(VAR3);
                    VAR5 = new InputStreamReader(VAR4, "");
                    VAR6 = new BufferedReader(VAR5);
    
                    
                    
                    String VAR7 = VAR6.readLine();
                    if (VAR7 != null)
                    {
                        try
                        {
                            VAR2 = VAR8.FUN2(VAR7.trim());
                        }
                        catch(NumberFormatException VAR9)
                        {
                            VAR10.VAR11.log(VAR12.VAR13, "", VAR9);
                        }
                    }
                }
                catch (IOException VAR14)
                {
                    VAR10.VAR11.log(VAR12.VAR13, "", VAR14);
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
                    catch (IOException VAR14)
                    {
                        VAR10.VAR11.log(VAR12.VAR13, "", VAR14);
                    }
    
                    try
                    {
                        if (VAR5 != null)
                        {
                            VAR5.close();
                        }
                    }
                    catch (IOException VAR14)
                    {
                        VAR10.VAR11.log(VAR12.VAR13, "", VAR14);
                    }
    
                    try
                    {
                        if (VAR4 != null)
                        {
                            VAR4.close();
                        }
                    }
                    catch (IOException VAR14)
                    {
                        VAR10.VAR11.log(VAR12.VAR13, "", VAR14);
                    }
                }
            }
    
            
            ByteArrayOutputStream VAR15 = null;
            ObjectOutput VAR16 = null;
    
            try
            {
                VAR15 = new FUN3() ;
                VAR16 = new FUN4(VAR15) ;
                VAR16.FUN5(VAR2);
                byte[] VAR17 = VAR15.FUN6();
                (new FUN7()).FUN8(VAR17  );
            }
            catch (IOException VAR14)
            {
                VAR10.VAR11.log(VAR12.VAR13, "", VAR14);
            }
            finally
            {
                
                try
                {
                    if (VAR16 != null)
                    {
                        VAR16.close();
                    }
                }
                catch (IOException VAR14)
                {
                    VAR10.VAR11.log(VAR12.VAR13, "", VAR14);
                }
    
                try
                {
                    if (VAR15 != null)
                    {
                        VAR15.close();
                    }
                }
                catch (IOException VAR14)
                {
                    VAR10.VAR11.log(VAR12.VAR13, "", VAR14);
                }
            }
        }
};