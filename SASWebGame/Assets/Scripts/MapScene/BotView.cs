using System.Collections;
using Unity.VisualScripting;

namespace SAS
{
    public class BotView : State
    {
        public BotView(TravelSystem travelSystem):base(travelSystem)
        {
            
        }

        public override IEnumerator Start()
        {
            _travelSystem.test = 2;
            yield break;
        }
        
        public override IEnumerator LoadProgress()
        {
            return base.LoadProgress();
        }
    }
}