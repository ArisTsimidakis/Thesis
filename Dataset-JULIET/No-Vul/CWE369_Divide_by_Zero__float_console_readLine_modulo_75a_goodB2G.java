class VAR1{
    private void FUN1() throws Throwable
        {
            float VAR2;
    
            VAR2 = -1.0f; 
    
            InputStreamReader VAR3 = null;
            BufferedReader VAR4 = null;
    
            
            try
            {
                VAR3 = new InputStreamReader(System.in, "");
                VAR4 = new BufferedReader(VAR3);
    
                
                String VAR5 = VAR4.readLine();
    
                if (VAR5 != null) 
                {
                    try
                    {
                        VAR2 = VAR6.FUN2(VAR5.trim());
                    }
                    catch (NumberFormatException VAR7)
                    {
                        VAR8.VAR9.log(VAR10.VAR11, "", VAR7);
                    }
                }
            }
            catch (IOException VAR12)
            {
                VAR8.VAR9.log(VAR10.VAR11, "", VAR12);
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
                catch (IOException VAR12)
                {
                    VAR8.VAR9.log(VAR10.VAR11, "", VAR12);
                }
    
                try
                {
                    if (VAR3 != null)
                    {
                        VAR3.close();
                    }
                }
                catch (IOException VAR12)
                {
                    VAR8.VAR9.log(VAR10.VAR11, "", VAR12);
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
            catch (IOException VAR12)
            {
                VAR8.VAR9.log(VAR10.VAR11, "", VAR12);
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
                catch (IOException VAR12)
                {
                    VAR8.VAR9.log(VAR10.VAR11, "", VAR12);
                }
    
                try
                {
                    if (VAR13 != null)
                    {
                        VAR13.close();
                    }
                }
                catch (IOException VAR12)
                {
                    VAR8.VAR9.log(VAR10.VAR11, "", VAR12);
                }
            }
        }
};