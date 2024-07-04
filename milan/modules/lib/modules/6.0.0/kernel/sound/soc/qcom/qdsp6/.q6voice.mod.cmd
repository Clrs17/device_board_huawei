savedcmd_sound/soc/qcom/qdsp6/q6voice.mod := printf '%s\n'   q6voice.o | awk '!x[$$0]++ { print("sound/soc/qcom/qdsp6/"$$0) }' > sound/soc/qcom/qdsp6/q6voice.mod
