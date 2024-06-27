class VAR1{
    public void FUN1(byte[] VAR2 ) throws Throwable
        {
            
            ByteArrayInputStream VAR3 = null;
            ObjectInputStream VAR4 = null;
    
            try
            {
                VAR3 = new FUN2(VAR2);
                VAR4 = new ObjectInputStream(VAR3);
                byte VAR5 = (VAR6)VAR4.readObject();
    
                
                
                if ((VAR5 != VAR7.VAR8) && (VAR5 != VAR9.VAR8) && (Math.abs(VAR5) <= (long)Math.sqrt(VAR6.VAR10)))
                {
                    byte VAR11 = (byte)(VAR5 * VAR5);
                    VAR12.writeLine("" + VAR11);
                }
                else
                {
                    VAR12.writeLine("");
                }
    
            }
            catch (IOException VAR13)
            {
                VAR12.VAR14.log(VAR15.VAR16, "", VAR13);
            }
            catch (ClassNotFoundException VAR17)
            {
                VAR12.VAR14.log(VAR15.VAR16, "", VAR17);
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
                catch (IOException VAR13)
                {
                    VAR12.VAR14.log(VAR15.VAR16, "", VAR13);
                }
    
                try
                {
                    if (VAR3 != null)
                    {
                        VAR3.close();
                    }
                }
                catch (IOException VAR13)
                {
                    VAR12.VAR14.log(VAR15.VAR16, "", VAR13);
                }
            }
        }
};