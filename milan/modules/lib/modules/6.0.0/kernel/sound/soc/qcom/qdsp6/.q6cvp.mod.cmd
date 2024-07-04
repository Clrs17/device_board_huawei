savedcmd_sound/soc/qcom/qdsp6/q6cvp.mod := printf '%s\n'   q6cvp.o | awk '!x[$$0]++ { print("sound/soc/qcom/qdsp6/"$$0) }' > sound/soc/qcom/qdsp6/q6cvp.mod
