# bash
# will rename diagram.json to diagramx.json if exists and rename diagramx.json to diagram.json if exists


if [ -f "diagram.json" ]; then
    mv diagram.json diagramx.json
elif [ -f "diagramx.json" ]; then
    mv diagramx.json diagram.json
fi