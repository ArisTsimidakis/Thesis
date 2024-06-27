class VAR1{
    private void FUN1() throws Throwable
        {
            int VAR2;
    
            
            VAR2 = (new FUN2()).nextInt();
    
            
            ByteArrayOutputStream VAR3 = null;
            ObjectOutput VAR4 = null;
    
            try
            {
                VAR3 = new FUN3() ;
                VAR4 = new FUN4(VAR3) ;
                VAR4.FUN5(VAR2);
                byte[] VAR5 = VAR3.FUN6();
                (new FUN7()).FUN8(VAR5  );
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
};