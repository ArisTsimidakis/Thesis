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
    
                
                
                if ((VAR5 != VAR7.VAR8) && (VAR5 != VAR9.VAR8) && (Math.abs(VAR5) <= (long)Math.sqrt(VAR6.VAR10)))
                {
                    short VAR11 = (VAR12)(VAR5 * VAR5);
                    VAR13.writeLine("" + VAR11);
                }
                else
                {
                    VAR13.writeLine("");
                }
    
            }
            catch (IOException VAR14)
            {
                VAR13.VAR15.log(VAR16.VAR17, "", VAR14);
            }
            catch (ClassNotFoundException VAR18)
            {
                VAR13.VAR15.log(VAR16.VAR17, "", VAR18);
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
                catch (IOException VAR14)
                {
                    VAR13.VAR15.log(VAR16.VAR17, "", VAR14);
                }
    
                try
                {
                    if (VAR3 != null)
                    {
                        VAR3.close();
                    }
                }
                catch (IOException VAR14)
                {
                    VAR13.VAR15.log(VAR16.VAR17, "", VAR14);
                }
            }
        }
};