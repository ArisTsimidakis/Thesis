class VAR1{
    public void FUN1(byte[] VAR2 ) throws Throwable
        {
            
            ByteArrayInputStream VAR3 = null;
            ObjectInputStream VAR4 = null;
    
            try
            {
                VAR3 = new FUN2(VAR2);
                VAR4 = new ObjectInputStream(VAR3);
                short VAR5 = (VAR6)VAR4.readObject();
    
                
                if (VAR5 > VAR6.VAR7)
                {
                    VAR5--;
                    short VAR8 = (VAR9)(VAR5);
                    VAR10.writeLine("" + VAR8);
                }
                else
                {
                    VAR10.writeLine("");
                }
    
            }
            catch (IOException VAR11)
            {
                VAR10.VAR12.log(VAR13.VAR14, "", VAR11);
            }
            catch (ClassNotFoundException VAR15)
            {
                VAR10.VAR12.log(VAR13.VAR14, "", VAR15);
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
                catch (IOException VAR11)
                {
                    VAR10.VAR12.log(VAR13.VAR14, "", VAR11);
                }
    
                try
                {
                    if (VAR3 != null)
                    {
                        VAR3.close();
                    }
                }
                catch (IOException VAR11)
                {
                    VAR10.VAR12.log(VAR13.VAR14, "", VAR11);
                }
            }
        }
};