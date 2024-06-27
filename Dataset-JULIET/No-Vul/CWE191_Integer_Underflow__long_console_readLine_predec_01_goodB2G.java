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
    
            
            if (VAR2 > VAR6.VAR13)
            {
                long VAR14 = (long)(--VAR2);
                VAR8.writeLine("" + VAR14);
            }
            else
            {
                VAR8.writeLine("");
            }
    
        }
};