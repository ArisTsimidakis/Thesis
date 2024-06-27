class VAR1{
    private void FUN1() throws Throwable
        {
            long VAR2;
    
            
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
    
            
            ByteArrayOutputStream VAR13 = null;
            ObjectOutput VAR14 = null;
    
            try
            {
                VAR13 = new FUN3() ;
                VAR14 = new FUN4(VAR13) ;
                VAR14.FUN5(VAR2);
                byte[] VAR15 = VAR13.FUN6();
                (new FUN7()).FUN8(VAR15  );
            }
            catch (IOException VAR7)
            {
                VAR8.VAR9.log(VAR10.VAR11, "", VAR7);
            }
            finally
            {
                
                try
                {
                    if (VAR14 != null)
                    {
                        VAR14.close();
                    }
                }
                catch (IOException VAR7)
                {
                    VAR8.VAR9.log(VAR10.VAR11, "", VAR7);
                }
    
                try
                {
                    if (VAR13 != null)
                    {
                        VAR13.close();
                    }
                }
                catch (IOException VAR7)
                {
                    VAR8.VAR9.log(VAR10.VAR11, "", VAR7);
                }
            }
        }
};