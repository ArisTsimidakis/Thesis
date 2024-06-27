class VAR1{
    public void FUN1() throws Throwable
        {
            String VAR2;
    
            VAR2 = ""; 
    
            
            {
                Socket VAR3 = null;
                BufferedReader VAR4 = null;
                InputStreamReader VAR5 = null;
    
                try
                {
                    
                    VAR3 = new Socket("", 39544);
    
                    
    
                    VAR5 = new InputStreamReader(VAR3.getInputStream(), "");
                    VAR4 = new BufferedReader(VAR5);
    
                    
                    VAR2 = VAR4.readLine();
                }
                catch (IOException VAR6)
                {
                    VAR7.VAR8.log(VAR9.VAR10, "", VAR6);
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
                    catch (IOException VAR6)
                    {
                        VAR7.VAR8.log(VAR9.VAR10, "", VAR6);
                    }
    
                    try
                    {
                        if (VAR5 != null)
                        {
                            VAR5.close();
                        }
                    }
                    catch (IOException VAR6)
                    {
                        VAR7.VAR8.log(VAR9.VAR10, "", VAR6);
                    }
    
                    
                    try
                    {
                        if (VAR3 != null)
                        {
                            VAR3.close();
                        }
                    }
                    catch (IOException VAR6)
                    {
                        VAR7.VAR8.log(VAR9.VAR10, "", VAR6);
                    }
                }
            }
    
            
            ByteArrayOutputStream VAR11 = null;
            ObjectOutput VAR12 = null;
    
            try
            {
                VAR11 = new FUN2() ;
                VAR12 = new FUN3(VAR11) ;
                VAR12.FUN4(VAR2);
                byte[] VAR13 = VAR11.FUN5();
                (new FUN6()).FUN7(VAR13  );
            }
            catch (IOException VAR6)
            {
                VAR7.VAR8.log(VAR9.VAR10, "", VAR6);
            }
            finally
            {
                
                try
                {
                    if (VAR12 != null)
                    {
                        VAR12.close();
                    }
                }
                catch (IOException VAR6)
                {
                    VAR7.VAR8.log(VAR9.VAR10, "", VAR6);
                }
    
                try
                {
                    if (VAR11 != null)
                    {
                        VAR11.close();
                    }
                }
                catch (IOException VAR6)
                {
                    VAR7.VAR8.log(VAR9.VAR10, "", VAR6);
                }
            }
        }
};