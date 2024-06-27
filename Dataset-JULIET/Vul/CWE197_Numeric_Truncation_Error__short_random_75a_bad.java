class VAR1{
    public void FUN1() throws Throwable
        {
            short VAR2;
    
            
            VAR2 = (VAR3)((new FUN2()).nextInt(VAR4.VAR5 + 1));
    
            
            ByteArrayOutputStream VAR6 = null;
            ObjectOutput VAR7 = null;
    
            try
            {
                VAR6 = new FUN3() ;
                VAR7 = new FUN4(VAR6) ;
                VAR7.FUN5(VAR2);
                byte[] VAR8 = VAR6.FUN6();
                (new FUN7()).FUN8(VAR8  );
            }
            catch (IOException VAR9)
            {
                VAR10.VAR11.log(VAR12.VAR13, "", VAR9);
            }
            finally
            {
                
                try
                {
                    if (VAR7 != null)
                    {
                        VAR7.close();
                    }
                }
                catch (IOException VAR9)
                {
                    VAR10.VAR11.log(VAR12.VAR13, "", VAR9);
                }
    
                try
                {
                    if (VAR6 != null)
                    {
                        VAR6.close();
                    }
                }
                catch (IOException VAR9)
                {
                    VAR10.VAR11.log(VAR12.VAR13, "", VAR9);
                }
            }
        }
};