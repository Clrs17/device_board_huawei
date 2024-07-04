savedcmd_sound/soc/qcom/qdsp6/q6voice-common.mod := printf '%s\n'   q6voice-common.o | awk '!x[$$0]++ { print("sound/soc/qcom/qdsp6/"$$0) }' > sound/soc/qcom/qdsp6/q6voice-common.mod
