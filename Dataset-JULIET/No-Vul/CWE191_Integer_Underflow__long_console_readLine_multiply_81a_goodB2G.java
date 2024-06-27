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
    
            CWE191_Integer_Underflow__long_console_readLine_multiply_81_base VAR13 = new FUN3();
            VAR13.FUN4(VAR2 );
        }
};