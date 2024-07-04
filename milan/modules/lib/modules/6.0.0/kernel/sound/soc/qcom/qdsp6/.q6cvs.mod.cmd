savedcmd_sound/soc/qcom/qdsp6/q6cvs.mod := printf '%s\n'   q6cvs.o | awk '!x[$$0]++ { print("sound/soc/qcom/qdsp6/"$$0) }' > sound/soc/qcom/qdsp6/q6cvs.mod
