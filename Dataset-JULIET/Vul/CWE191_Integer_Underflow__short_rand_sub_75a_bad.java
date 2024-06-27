class VAR1{
    public void FUN1() throws Throwable
        {
            short VAR2;
    
            
            VAR2 = (VAR3)((new VAR4.VAR5.FUN2()).nextInt(1+VAR6.VAR7-VAR6.VAR8)+VAR6.VAR8);
    
            
            ByteArrayOutputStream VAR9 = null;
            ObjectOutput VAR10 = null;
    
            try
            {
                VAR9 = new FUN3() ;
                VAR10 = new FUN4(VAR9) ;
                VAR10.FUN5(VAR2);
                byte[] VAR11 = VAR9.FUN6();
                (new FUN7()).FUN8(VAR11  );
            }
            catch (IOException VAR12)
            {
                VAR13.VAR14.log(VAR15.VAR16, "", VAR12);
            }
            finally
            {
                
                try
                {
                    if (VAR10 != null)
                    {
                        VAR10.close();
                    }
                }
                catch (IOException VAR12)
                {
                    VAR13.VAR14.log(VAR15.VAR16, "", VAR12);
                }
    
                try
                {
                    if (VAR9 != null)
                    {
                        VAR9.close();
                    }
                }
                catch (IOException VAR12)
                {
                    VAR13.VAR14.log(VAR15.VAR16, "", VAR12);
                }
            }
        }
};