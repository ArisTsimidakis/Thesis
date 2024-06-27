class VAR1{
    private void FUN1() throws Throwable
        {
            if (FUN2())
            {
                byte[] VAR2 = "".getBytes("");
                KeyGenerator VAR3 = VAR4.FUN3("");
                VAR3.FUN4(128);
                SecretKey VAR5 = VAR3.FUN5();
                Cipher VAR6 = VAR7.FUN3("");
                int VAR8 = VAR6.FUN6();
                byte[] VAR9 = new byte[VAR8];
                SecureRandom VAR10 = new FUN7();
                VAR10.FUN8(VAR9);
                
                IvParameterSpec VAR11 = new FUN9(VAR9);
                VAR6.FUN4(VAR7.VAR12, VAR5, VAR11);
                VAR13.writeLine(VAR13.FUN10(VAR6.FUN11(VAR2)));
            }
        }
};