using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace SAS
{
    public class Begin : State
    {

        public Begin(TravelSystem travelSystem) : base(travelSystem)
        {
            
        }
        public override IEnumerator Start()
        {
            _travelSystem.test = 1;
            yield return new WaitForSeconds(2f);
            
            _travelSystem.SetState(new BotView(_travelSystem));
        }

        public override IEnumerator LoadProgress()
        {
            return base.LoadProgress();
        }
    }
}