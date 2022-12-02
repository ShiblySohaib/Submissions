import Counter from "./Counter";
const About = ({ dark }) => {
  return (
    <div className="dizme_tm_section" id="about">
      <div className="dizme_tm_about">
        <div className="container">
          <div className="wrapper">
            <div className="left">
              <div className="image">
                <img src={`img/about/${dark ? 4 : 3}.jpg`} alt="image" />
                <div className="numbers year">
                  <div className="wrapper">
                    <h3>
                      <Counter end={2} />
                    </h3>
                    <span className="name">
                      Years of
                      <br />
                      Success
                    </span>
                  </div>
                </div>
                <div className="numbers project">
                  <div className="wrapper">
                    <h3>
                      <Counter end={15} />+
                    </h3>
                    <span className="name">
                      Research
                      <br />
                      Areas
                    </span>
                  </div>
                </div>
              </div>
            </div>
            <div className="right">
              <div className="title wow fadeInUp" data-wow-duration="1s">
                <span>{`I'm an Associate Professor `}</span>
                <h3> I am also a senior scientist</h3>
              </div>
              <div className="text wow fadeInUp" data-wow-duration="1s">
                <p>
                  {`Hello there! I'm an Associate Professor at the University of California, Berkeley. My research interests are in cryptography and security. Prior to this, I was a Josef Raviv Memorial Postdoctoral Fellow at IBM Research T.J. Watson. With 2 years experience as a
                  senior scientist in CSI team at NTT Research, I have acquired the skills and
                  knowledge necessary to make any research as success.`}
                </p>
              </div>
              <div
                className="dizme_tm_button wow fadeInUp"
                data-wow-duration="1s"
              >
                <a className="anchor" href="#contact">
                  <span>Contact Me</span>
                </a>
              </div>
            </div>
          </div>
        </div>
        <div className="brush_1 wow fadeInLeft" data-wow-duration="1s">
          <img src="img/brushes/about/1.png" alt="image" />
        </div>
        <div className="brush_2 wow fadeInRight" data-wow-duration="1s">
          <img src="img/brushes/about/2.png" alt="image" />
        </div>
      </div>
    </div>
  );
};
export default About;
