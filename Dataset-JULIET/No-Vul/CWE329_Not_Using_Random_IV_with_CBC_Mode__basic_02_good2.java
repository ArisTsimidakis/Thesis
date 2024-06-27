class VAR1{
    private void FUN1() throws Throwable
        {
            if (true)
            {
                byte[] VAR2 = "".getBytes("");
                KeyGenerator VAR3 = VAR4.FUN2("");
                VAR3.FUN3(128);
                SecretKey VAR5 = VAR3.FUN4();
                Cipher VAR6 = VAR7.FUN2("");
                int VAR8 = VAR6.FUN5();
                byte[] VAR9 = new byte[VAR8];
                SecureRandom VAR10 = new FUN6();
                VAR10.FUN7(VAR9);
                
                IvParameterSpec VAR11 = new FUN8(VAR9);
                VAR6.FUN3(VAR7.VAR12, VAR5, VAR11);
                VAR13.writeLine(VAR13.FUN9(VAR6.FUN10(VAR2)));
            }
        }
};