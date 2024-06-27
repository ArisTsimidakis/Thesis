void VAR1::FUN1(
    const OperationID VAR2,
    OpenFileCallback VAR3,
    VAR4::File VAR5,
    VAR4::OnceClosure VAR6) {
  if (VAR7) {
    VAR8.FUN2(VAR2);
    VAR4::VAR9::FUN3()->FUN4(
        VAR10,
        VAR4::FUN5(&VAR1::VAR11, VAR12, VAR2,
                       VAR13::move(VAR3), VAR13::move(VAR5),
                       VAR13::move(VAR6)));
    return;
  }
  VAR13::move(VAR3).FUN6(VAR13::move(VAR5), VAR13::move(VAR6));
  FUN7(VAR2);
}