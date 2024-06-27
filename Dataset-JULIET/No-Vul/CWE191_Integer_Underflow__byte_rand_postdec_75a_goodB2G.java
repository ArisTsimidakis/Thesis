class VAR1{
    private void FUN1() throws Throwable
        {
            byte VAR2;
    
            
            VAR2 = (byte)((new VAR3.VAR4.FUN2()).nextInt(1+VAR5.VAR6-VAR5.VAR7) + VAR5.VAR7);
    
            
            ByteArrayOutputStream VAR8 = null;
            ObjectOutput VAR9 = null;
    
            try
            {
                VAR8 = new FUN3() ;
                VAR9 = new FUN4(VAR8) ;
                VAR9.FUN5(VAR2);
                byte[] VAR10 = VAR8.FUN6();
                (new FUN7()).FUN8(VAR10  );
            }
            catch (IOException VAR11)
            {
                VAR12.VAR13.log(VAR14.VAR15, "", VAR11);
            }
            finally
            {
                
                try
                {
                    if (VAR9 != null)
                    {
                        VAR9.close();
                    }
                }
                catch (IOException VAR11)
                {
                    VAR12.VAR13.log(VAR14.VAR15, "", VAR11);
                }
    
                try
                {
                    if (VAR8 != null)
                    {
                        VAR8.close();
                    }
                }
                catch (IOException VAR11)
                {
                    VAR12.VAR13.log(VAR14.VAR15, "", VAR11);
                }
            }
        }
};